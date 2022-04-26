#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter a positive number;"<<endl;
    cin>>n;
    int output;
    for(int i=1;i<=10;++i){
        output=n*i;
        cout<<output<<endl;
    }
    return 0;
}