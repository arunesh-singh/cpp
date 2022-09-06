#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void subseq(string a,string ans=""){
    if(a.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=a[0];
    string ros= a.substr(1);

    subseq(ros,ans);
    subseq(ros,ans+ch);
}

int main(){
    subseq("ABC","");
}