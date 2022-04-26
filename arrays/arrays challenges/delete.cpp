#include "bits/stdc++.h"
#include <iostream>

using namespace std;

int main(){

    int n;
    cin>>n;

    int array[n];
    
    for(int i=0; i<n ; i++ ){
        cin>>array[i];
    }
    
    int x;
    cin>>x;

    for(int i=0; i<n ; i++ ){
        if( array[i] == x ){
            array[i]=array[i+1];
        }
    }
    for(int i=0; i<n-1 ; i++ ){
        cout<<array[i]<<" ";
    }
    return 0;
}