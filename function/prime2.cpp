// Print all numbers between 2 given numbers.

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number -:";
    cin>>n;
    bool flag = true;
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag = false;
            break;
        }
    }
    if(n<=1){
        flag=false;
    }
    if (flag== true){
        cout<<"Prime";
    }
    else{
        cout<<"Not prime";
    }
    return 0;
}