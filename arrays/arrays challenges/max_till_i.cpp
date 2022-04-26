#include <iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    int mx=INT_MIN;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        mx=max(a[i],mx);
        cout<<mx<<" ";
    }
    return 0;
}