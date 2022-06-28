#include "bits/stdc++.h"
using namespace std;

void solution(){
    int n;
    cin>> n;

    vector<int> arr(n);
    for(int i =0 ; i<n ; i++){
        cin>>arr[i];
    }

    int max_val = 0;

    for(int i =0 ; i<n ; i++){
        max_val = max(max_val , arr[i]+ arr[i-1]);
    }

    cout<<max_val<<endl;
}

int main{

    int t;
    cin>>t;
    while(t--) solution();
}