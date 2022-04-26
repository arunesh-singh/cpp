#include<iostream>
using namespace std;
int main()
{
    int n,temp=0;
    cout<<"enter the size of array :";
    cin>>n;
    int a[n],b[n];
    cout<<"enter the element of array :\n";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0,j=n-1-i; i<n; i++,j--)
    {
        b[i]=a[j];
    }
    cout<<"\n reversed array is :\n";
    for(int i=0; i<n; i++)
    {
        cout<<b[i]<<" ";
    }

    bool check = 1;

    for(int i=0; i<n; i++)
    {
        if(a[i] != b[i]){
            check = 0;
            break;
    }

    if(check == true){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}