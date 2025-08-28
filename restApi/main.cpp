
// 1. https://raw.githubusercontent.com/yhirose/cpp-httplib/master/httplib.h
// 2. Compile using a C++11 compliant compiler (or newer), for example:
// 3. g++ -std=c++20 -o server main.cpp -pthread -lssl -lcrypto
//    (-lssl and -lcrypto are needed for the HTTPS client)
// 4. Run
//    ./server

#define CPPHTTPLIB_OPENSSL_SUPPORT
#include "httplib.h"
#include <iostream>

using namespace httplib;
using namespace std;

void proxy_request(const Request &req, Response &res, const string &path)
{
  Client cli("https://jsonplaceholder.typicode.com");
  cli.enable_server_certificate_verification(false);

  cout << "Forwarding " << req.method << " request to: " << path << endl;

  Result api_res;
  if (req.method == "GET")
  {
    api_res = cli.Get(path.c_str());
  }
  else if (req.method == "POST")
  {
    api_res = cli.Post(path.c_str(), req.body, "application/json");
  }
  else if (req.method == "PUT")
  {
    api_res = cli.Put(path.c_str(), req.body, "application/json");
  }
  else if (req.method == "DELETE")
  {
    api_res = cli.Delete(path.c_str());
  }

  if (api_res)
  {
    res.status = api_res->status;
    res.set_content(api_res->body, api_res->get_header_value("Content-Type"));
  }
  else
  {
    res.status = 500;
    res.set_content("{\"error\": \"Failed to connect to external API\"}", "application/json");
  }
}

int main(void)
{
  Server svr;

  svr.Get("/health", [](const Request &req, Response &res)
          {
        string body = "{\"status\": \"ok\", \"message\": \"Service is running\"}";
        res.set_content(body, "application/json");
        res.status = 200;
        cout << "Health check request received. Status: OK" << endl; });

  svr.Get("/posts", [](const Request &req, Response &res)
          { proxy_request(req, res, "/posts"); });

  // GET /posts/{id} - Get a single post by ID
  svr.Get(R"(/posts/(\d+))", [](const Request &req, Response &res)
          {
        string post_id = req.matches[1];
        proxy_request(req, res, "/posts/" + post_id); });

  // POST /posts - Create a new post
  // '{"title": "foo", "body": "bar", "userId": 1}'
  svr.Post("/posts", [](const Request &req, Response &res)
           { proxy_request(req, res, "/posts"); });

  // PUT /posts/{id} - Update a post
  // '{"id": 1, "title": "foo", "body": "bar", "userId": 1}'
  svr.Put(R"(/posts/(\d+))", [](const Request &req, Response &res)
          {
        string post_id = req.matches[1];
        proxy_request(req, res, "/posts/" + post_id); });

  // DELETE /posts/{id} - Delete a post
  svr.Delete(R"(/posts/(\d+))", [](const Request &req, Response &res)
             {
        string post_id = req.matches[1];
        proxy_request(req, res, "/posts/" + post_id); });

  const string host = "0.0.0.0";
  const int port = 8080;

  cout << "Server starting on " << host << ":" << port << endl;
  cout << "API proxy for JSONPlaceholder is active." << endl;

  if (!svr.listen(host.c_str(), port))
  {
    cerr << "Failed to start server on " << host << ":" << port << endl;
    return 1;
  }

  return 0;
}
