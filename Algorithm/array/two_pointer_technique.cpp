#include "bits/stdc++.h"
using namespace std;

int main()
{
  vector<int> arr = {1, 3, 5, 6, 7, 8, 10, 11, 14, 15, 16};
  int key = 13;
  int start = 0, end = arr.size() - 1;

  while (start < end)
  {
    if (arr[start] + arr[end] == key)
    {
      cout << arr[start] << " + " << arr[end] << " = " << key << endl;
      break;
    }
    else if (arr[start] + arr[end] < key)
    {
      start++;
    }
    else
    {
      end--;
    }
  }

  return 0;
}