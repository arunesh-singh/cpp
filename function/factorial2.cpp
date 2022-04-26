#include <iostream>
using namespace std;

int fact(int n){
    int sum=1;
    for(int i=1;i<=n;i++){
        sum=sum*i;
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter a number -: ";
    cin>>n;
    cout<<"Factorial of "<<n<<" is "<<fact(n);
    return 0;

}