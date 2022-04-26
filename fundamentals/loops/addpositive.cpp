#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter numbers for sum-:"<<endl;
    cin>>n;
    int sum;
    sum=0;
    while(n>=0){
        sum+=n;
        cout<<"Enter a number-:"<<endl;
        cin>>n;

    }
    cout<<"\nThe sum is  "<<sum<<endl;
    return 0;
}