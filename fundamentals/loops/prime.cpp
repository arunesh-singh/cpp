#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter a number-:\n";
    cin>>n;
    int i;
    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<n<<" is not prime.\n";
            break;
            
        }
    }
    if(i==n){
        cout<<n<<" is prime."<<endl;
    }
    
    return 0;
}