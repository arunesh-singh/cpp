#include "bits/stdc++.h"
using namespace std;

void skip(string str , string ans){

    if( str.length() == 0){
        cout<<ans<<endl;
        return;
    }
    
    char ch = str[0];

    if( ch == 'a')
        skip(str.substr(1) , ans);
    else
        skip(str.substr(1) , ans+ch);
}

string recurskip(string str , string ans){

    if( str.length() == 0){
        return "";
    }
    
    char ch = str[0];

    if( ch == 'a')
        return skip(str.substr(1));
    else
        return ans + skip(str.substr(1));
}

int main(){

    
    recurskip("abcdajhaafg" , "");
    return 0;
}