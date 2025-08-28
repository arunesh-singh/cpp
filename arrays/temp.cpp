#include <iostream>
#include <vector>
using namespace std;

void maxTillI(int arr[], int n)
{

  cout << arr[0] << endl;
  int mx = arr[0];
  for (int i = 1; i < n; i++)
  {
    for (int j = i - 1; j >= 0; j++)
    {
      mx = max(arr[i], mx);
    }
    cout << mx << endl;
  }
}

int main()
{

  vector<int> arr;

  arr = {31, 12, 43, 1, 5};

  int prefix[arr.size() - 1e]n 
  ;



  

  for (int i = 0; i < arr.size() - 1; i++)
  {
    prefix[i] = arr[i + 1] - arr[i];
  }

  for (int num : prefix)
  {
    cout << num << " ";
  }

  return 0;
}