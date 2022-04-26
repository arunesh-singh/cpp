/*
9. WAP to print a triangle of stars as follows (take number of lines from user):
*
***
*****
*******
*********
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no of row -: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }cout<<endl;
    }
    return 0;
}