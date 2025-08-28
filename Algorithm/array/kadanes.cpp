// finding maximum in subarrays

#include "bits/stdc++.h"
using namespace std;

int main()
{
  vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
  int maxSum = INT_MIN;
  int currSum = 0;

  for (int i = 0; i < arr.size(); i++)
  {
    currSum += arr[i];
    maxSum = max(maxSum, currSum);
    if (currSum < 0)
    {
      currSum = 0;
    }
  }

  cout << maxSum << endl;

  return 0;
}