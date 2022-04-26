#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(int argc, char const *argv[])
{
    string a="aABCadEj";
    string b="anWmfEEIOn";
    
    // UPPERCASE
    for(int i=0;i<a.length();i++){
        if( a[i] >= 'a' and a[i] <= 'z'){
            a[i]-=32;
        }
    }
    cout<<"UPPERCASE - "<<a<<endl;

    // lovercase
    for(int i=0;i<a.length();i++){
        if( a[i] >= 'A' and a[i] <= 'Z'){
            a[i]+=32;
        }
    }
    cout<<"LOVERCASE - "<<a<<endl;

    // using built in func
    transform(b.begin(),b.end(), b.begin(), :: toupper);
    cout<<"UPPERCASE - "<<b<<endl;

    transform(b.begin(),b.end(), b.begin(), :: tolower);
    cout<<"LOVERCASE - "<<b<<endl;
    return 0;
}
