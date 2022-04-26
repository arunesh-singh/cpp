#include <iostream>
using namespace std;

int main(){
    int n=10;
    int *a=&n;

    cout<<*a<<endl; //10

    int **b=&a;

    cout<<*b<<endl;  //location
    cout<<**b<<endl; //10
    return 0;
}