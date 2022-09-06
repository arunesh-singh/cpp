#include "bits/stdc++.h"
using namespace std;

void solution(){
    int n;
    cin>>n;
    vector<char> v;
    for(int i=0 ; i<n ; i++){
        string s;
        getline(cin , s);
        const char *c = s.c_str();
        v.push_back(*c);
    }
    cout<<v.size()<<endl;
    for(auto a:v){
        cout<<a<<" ";
    }
}

int main(){

    int t;
    cin>>t;
    while(t--) solution();

    return 0;   
}