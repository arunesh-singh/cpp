/*
input - 4 output - 4 3 2 1 1 2 3 4
*/

#include "bits/stdc++.h"
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

void dec(int n){
    if(n==0){
        cout<<1<<endl;
        return;
    }
    cout<<n<<endl;
    dec(n-1);
}

void inc(int n){
    if(n==1){
        cout<<1<<endl;
        return;
    }
    inc(n-1);
    cout<<n<<endl;
}

int main(){

    int n;
    cin>>n;

    dec(n);
    inc(n);

    return 0;
}
