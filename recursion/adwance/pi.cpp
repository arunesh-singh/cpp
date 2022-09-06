// input pippxxppiixipi
// output 3.14ppxxp3.14ixi3.14

#include "bits/stdc++.h"
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void replacepi(string arr){
    
    if(arr.length()==0){
        return;
    }
    else if( arr[0] == 'p' && arr[1] == 'i' ){
        cout<<3.14;
        replacepi(arr.substr(2));
    }
    else{
        cout<<arr[0];
        replacepi(arr.substr(1));
    }
}

int main(){

    string arr;
    cin>>arr;

    replacepi(arr);
    
    return 0;
}