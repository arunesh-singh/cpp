#include <iostream>
using namespace std;
void even_odd(int n){
    if(n%2==0){
        cout<<"Even";
    }else{
        cout<<"Odd";
    }
    return;
}

int main(){
    #ifndef ONLINE_JUJDE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n;
    cin>>n;
    even_odd(n);
    return 0;
}