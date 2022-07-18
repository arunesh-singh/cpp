#include <iostream>
using namespace std;

int fibbo(int n){

    if(n < 2){
        return n;
    }

    return fibbo(n-1) + fibbo(n-2);
}


int main(){

    int n;
    cout<<"Input the no. of terms : ";
    cin>>n;

    cout<<"Sum of "<<n<<" terms is "<<fibbo(n)<<endl;
}