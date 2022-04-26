/*
5. Write a function that checks whether a given string is 
Palindrome or not. Use this function to find whether 
the string entered by user is Palindrome or not.
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of the string -: ";
    cin>>n;

    char arr[n+1];
    cout<<"Enter string -: ";
    cin>>arr;

    bool check =1;

    for(int i=0 ; i<n ; i++)
    {
        if(arr[i] != arr[n-1-i])
        {
            check = 0;
            break;
        }
    }
    if(check == true)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}