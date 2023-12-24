/* Input : A = {1, 2, 3, 4, 5}
Output : [48]
         [20, 28]
         [8, 12, 16]
         [3, 5, 7, 9]
         [1, 2, 3, 4, 5]  */

#include "bits/stdc++.h"
using namespace std;
/*
void helper(int arr, int s, int a){
    if( a == s ){
        return;
    }

}
 */
void sumTriangle(int *arr, int s)
{
    if (s < 1)
    {
        return;
    }
    for (int i = 0; i < s - 1; i++)
    {
        arr[i] = arr[i] + arr[i + 1];
    }
    for (int i = 0; i < s; i++)
    {
        cout << array[i];
    }
    sumTriangle(arr, s - 1);
}

int main()
{

    int n;
    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    sumTriangle(array, n);
    for (int i = 0; i < n; i++)
    {
        cout << array[i];
    }

    return 0;
}