#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int sum=0;
    int counter=1;
    while (counter<=n){
        sum=sum+counter;
        counter++;
        
    }
    cout<<sum<<endl;
    return 0;

}