// reducing the calculations

#include <bits/stdc++.h>
using namespace std;

int main()
{

  vector<int> arr = {1, 3, 2, 6, 4, 1, 2};
  int maxSum = INT_MIN;
  int windowSize = 3;
  int windowSum = 0;

  for (int i = 0; i < windowSize; i++)
  {
    windowSum += arr[i];
  }
  maxSum = windowSum;

  for (int i = windowSize; i < arr.size(); i++)
  {
    windowSum = windowSum + arr[i] - arr[i - windowSize];
    maxSum = max(windowSum, maxSum);
  }

  cout << maxSum << endl;

  return 0;
}