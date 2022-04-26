#include <iostream>
using namespace std;

void fact(int n){
    int fac=1;
    for(int i=1;i<=n;i++){
        fac=fac*i;
    }
    cout<<"Factorial of "<<n<<" is "<<fac<<endl;;
}

void fib(int n){
    int t1=0;
    int t2=1;
    int nextt;
    cout<<"Fibonacci series till "<<n<<" terms :\n";
    for(int i=1;i<=n;i++){
        cout<<t1<<" ";
        nextt=t1+t2;
        t1=t2;
        t2=nextt;

    }cout<<endl;
}

void hcf(int n1, int n2)
{
    while(n1 != n2) {
    if(n1 > n2)
      n1 -= n2;
    else
      n2 -= n1;
    }
    cout << "HCF = " << n1; 
}

int main(){
    int n,m;
    cout<<"Enter a number -: ";
    cin>>n;

    fact(n);
    fib(n);

    cout<<"Enter another number for HCF -: ";
    cin>>m;
    
    hcf(n,m);
    return 0;

}