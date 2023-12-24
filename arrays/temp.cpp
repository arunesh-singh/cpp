#include <iostream>
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

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    maxTillI(arr, n);
    return 0;
}