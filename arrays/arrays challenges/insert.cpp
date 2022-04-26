#include "bits/stdc++.h"
using namespace std;

int* insert(int n,int arr[], int x,int y){
    
    int i;
    n++;
    for(i=n;i>=x;i--){
        arr[i]=arr[i-1];
        cout<<i<<" ";
    }cout<<endl;
    arr[x-1]=y;
    return arr;
}

int main(){

    int n;
    cin>>n;

    int array[n];

    cout<<"\nBefore"<<endl;
    for(int i=0; i<n ; i++ ){
        cout<<array[i]<<" ";
    }cout<<endl;
    cout<<"Enter element and positon - : ";
    int x,y;
    cin>>x>>y;

    insert(n,array,x,y);

    cout<<"\nAfter"<<endl;
    for(int i=0; i<n+1 ; i++ ){
        cout<<array[i]<<" ";
    }cout<<endl;
    return 0;
}