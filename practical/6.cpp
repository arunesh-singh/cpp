/*
6. Write a function to find whether a given no. 
is prime or not. Use the same to generate the prime numbers 
less than 100.
*/

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

void prime_100(){
    int a=2,b=100;
    cout<<"Prime Numbers less than 100 -: "<<endl;
    for(int i=a;i<=b;i++){
        if(prime(i)){
            cout<<i<<" ";
        }
    }
}

int main(){
    int a;
    cout<<"Enter a number -: ";
    cin>>a;
    if(prime(a)){
        cout<<a<<" is prime number. "<<endl;
    }
    else{
        cout<<a<<" is not prime number. "<<endl;
    }
    prime_100();
    return 0;
}