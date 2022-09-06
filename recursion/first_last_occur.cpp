/*
Find the first and last occurance of a number in an array
{4,2,1,2,5,2,7}
*/

#include "bits/stdc++.h"
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int f_occur( int array[], int n ,int i, int x){

    if(i==n){
        return -1;
    }

    if(array[i]==x){
        return i;
    }
    return f_occur(array,n,i+1,x);
}
/*
int l_occur( int array[], int n ,int i, int x){

    if(i==0){
        return -1;
    }

    if(array[i]==x){
        return i;
    }
    return l_occur(array,n,i-1,x);
}
*/

int l_occur( int array[], int n ,int i, int x){

    if(i==n){
        return -1;
    }
    
    int restarray=l_occur(array,n,i+1,x);
    if(restarray != -1){
        return restarray;
    }
    if(array[i]==x){
        return i;
    }
    return -1;
}

int main(){

    int n;
    cin>>n;

    int array[n];
    
    for(int i=0; i<n ; i++ ){
        cin>>array[i];
    }
    int x;
    cin>>x;

    cout<< f_occur(array,n,0,x) << endl;
    cout<< l_occur(array,n,0,x) << endl;

    return 0;
}
