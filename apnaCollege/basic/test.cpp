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
  int arr[] = {4, 3, 1, 6, 2};

  cout << "Initial Array: ";
  for (int i = 0; i < 5; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  reverseArr(arr, 5);

  cout << "Reversed Array: ";
  for (int i = 0; i < 5; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}