#include "bits/stdc++.h"
#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

string reverse(string a,int i){
    if(i==(a.size()-1)){
        return a[i];
    }
    string reststring= reverse(a,i+1);
    return a[i];
}

int main(){

    string a="vinod";
    reverse(a,0);
    cout<<a<<endl;
    return 0;
}
