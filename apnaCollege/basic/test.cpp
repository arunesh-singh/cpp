#include "bits/stdc++.h"
using namespace std;

void reverseArr(int arr[], int size)
{
  int s = 0, e = size - 1;

  while (s <= e)
  {
    int a = arr[s];
    arr[s] = arr[e];
    arr[e] = a;
    s++;
    e--;
  }
}

int main()
{
  int n;
  cout << "Enter size of the array: ";
  cin >> n;

  int prices[n];
  cout << "Enter daily price of stock: ";
  for (int i = 0; i < n; i++)
  {
    cin >> prices[i];
  }

  int diff[n - 1];

  for (int i = 0; i < n; i++)
  {
    diff[i] = prices[i + 1] - prices[i];
  }

  cout << "Difference array: ";
  for (int i = 0; i < n - 1; i++)
  {
    cout << diff[i] << " ";
  }
  cout << endl;

  int tSum = diff[0], maxP = diff[0];
  for (int i = 1; i < n; i++)
  {
    tSum += diff[i];
    if (tSum > maxP)
    {
      maxP = tSum;
    }
  }

  cout << maxP << endl;

  return 0;
}