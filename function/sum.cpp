#include <iostream>
using namespace std;

void sum(int n){
    int s=0,p=1,i=1;
    while(i!=n){
        s+=i;
        p*=i;
        cin>>n;
    }
    cout<<"Total Sum = "<<s<<endl;
    cout<<"Product = "<<p<<endl;
}

int main(){
    int n;
    cout<<"Enter a number - ";
    cin>>n;
    sum(n);
    return 0;
}