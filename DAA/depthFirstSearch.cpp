#include <iostream>
#include <list>
using namespace std;

class Graph
{
    int numVertices;
    list<int> *adjLists;
    bool *visited;

public:
    Graph(int V);
    void addEdge(int src, int dest);
    void DFS(int vertex);
};

void Graph::addEdge(int scr, int dest)
{
    adjLists[src].push_front(dest);
}

void Graph::DFS(int vertex)
{
    visited[vertex] = true;
    list<int> adjList = adjList[vertex];

    cout << vertex << " ";

    list<int>::iterator i;
    for (i = adjList.begin(); i != adjList.end(); ++i)
        if (!visited[*i])
            DFS(*i);
}

int main()
{
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 3);

    g.DFS(2);

    return 0;
}