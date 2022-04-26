// Print all prime no btw two given numbers

#include <iostream>
#include <math.h>
using namespace std;

bool prime(int n){
    
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){

    int a,b;
    cout<<"Enter the first number -: ";
    cin>>a;
    cout<<"Enter 2nd number -: ";
    cin>>b;
    
    for(int i=a;i<=b;i++){

        if(prime(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}