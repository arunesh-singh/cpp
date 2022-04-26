#include "bits/stdc++.h"
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){

    int n;
    cin>>n;
    
    string arr1[n];  
    string arr2[n];  
    string arr3[n];  

    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }

/*   for(int i=0;i<n;i++){
        arr3[i]="";
    }
*/
    for(int i=0; i<n ; i++){
        arr3[i] = arr1[i] + arr2[i] ;
    }

    for(int i=0;i<n;i++){
        cout<<arr3[i]<<" ";
    }
    return 0;
}
