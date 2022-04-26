#include <iostream>
#include <math.h>
using namespace std;

int sum(int a,int b){
    int s=0;
    for(int i=a+1;i<b;i++){
        s=s+i;
    }
    return s;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"Sum of numbers b/w "<<a<<" and "<<b<<" is "<<sum(a,b)<<endl;
    return 0;
}
