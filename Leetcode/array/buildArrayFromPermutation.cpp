#include "bits/stdc++.h"
using namespace std;

int maximumWealth(vector<vector<int>> &accounts)
{
  int m = accounts.size();
  int n = accounts[0].size();
  int MAX = 0;
  for (int i = 0; i < m; i++)
  {
    int sum = 0;
    for (int j = 0; j < n; j++)
    {
      sum += accounts[i][j];
    }
    MAX = max(MAX, sum);
  }

  return MAX;
}

int main()
{
  vector<vector<int>> arr = {{1, 2, 1}, {3, 5, 1}};

  int ans = maximumWealth(arr);

  // for (int num : newArr)
  // {
  //   cout << num << " ";
  // }
  cout << ans << endl;

  return 0;
}