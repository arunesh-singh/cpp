//8. Write a macro that swaps two numbers. WAP to use it

#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;

}

int main(){
    int a,b;
    cout<<"Enter two number -: ";
    cin>>a>>b;
    cout<<"Values of a and b before swaping are "<<a<<" "<<b<<endl;
    swap(&a,&b);
    cout<<"Values of a and b after swaping are "<<a<<" "<<b<<endl;
    return 0;
}