#include <iostream>
using namespace std;

string moveallX(string a){

    if(a.length()==0){
        return "";
    }
    char ch = a[0];
    string ans = moveallX(a.substr(1));
    if(ch=='x'){
        return ans+ch;
    }
    return ch+ans;
}

int main(){

    cout<<moveallX("dkjxxkjfxkszxf");
    return 0;
    
}