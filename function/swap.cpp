#include <iostream>
using namespace std;

void swap(int a,int b){
    int c;
    c=a;
    a=b;
    b=c;
    cout<<a<<" "<<b;
    return;
}

int main(){
    int a,b;
    cin>>a>>b;
    swap(a,b);
    return 0;
}