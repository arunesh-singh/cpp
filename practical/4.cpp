/*
4. Write a program to compute the sum up to the n terms of the following series:
S= 1-2 + 3-4 + 5-6 + ……...
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number -: ";
    cin>>n;

    int sum=0;
    for(int i=1,j=2;i<=n or j<=n ;i+=2,j+=2){
        sum = (sum+i)-j;
    }
    cout<<"Sum till "<<n<<" terms is "<<sum<<endl;
}