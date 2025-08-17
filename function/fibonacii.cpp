// Printing first n terns of fiboncci series with starting terns as 0,1

#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  if (n == 1)
  {
    cout << "0";
  }
  else if (n == 2)
  {
    cout << "0 1";
  }
  else
  {
    int curr_f, a = 0, b = 1, i = 3;
    cout << a << " " << " ";
    while (i <= n)
    {
      curr_f = a + b;
      cout << curr_f << " ";
      a = b;
      b = curr_f;
      i++;
    }
  }
}