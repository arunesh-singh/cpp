#include <iostream>
using namespace std;

void swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int a,b;
    cout<<"\nEnter values of a and b: ";
    cin>>a>>b;
    cout<<"\nBefore swaping a = "<<a<<" and b = "<<b<<endl;
    swap(&a,&b);
    cout<<"\nBefore swaping a = "<<a<<" and b = "<<b<<endl;
    return 0;
}