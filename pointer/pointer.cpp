#include<iostream>
using namespace std;

int main(){
    int n=10;
    int *nptr= &n;
    cout<<n<<endl;
    cout<<&n<<endl;
    nptr++;
    cout<<nptr<<endl;
    cout<<*nptr<<endl;
}