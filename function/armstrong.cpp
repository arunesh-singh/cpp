

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i;
    int sum=0;

    while(n>0){
        int rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }
    if(n==sum){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }

    return 0;
}