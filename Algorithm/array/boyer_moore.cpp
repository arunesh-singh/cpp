#include "bits/stdc++.h"
using namespace std;

// brute force
int majority_element(vector<int> &nums)
{
  unordered_map<int, int> freq;
  for (int n : nums)
  {
    freq[n]++;
    if (freq[n] > nums.size() / 2)
    {
      return n;
    }
  }
  return -1;
}

// boyer's moore voting algo
//  You “pair off” different elements — they cancel each other.
//  What remains (if any) is the majority element.
int boyer_moore(vector<int>)

    int main()
{

  vector<int> arr = {2, 2, 1, 1, 1, 2, 2, 3, 2, 4, 1, 2, 1, 2};

  cout << majority_element(arr) << endl;

  return 0;
}