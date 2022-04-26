#include <iostream>
using namespace std;

class A{
    public:
    void fun(){
        cout<<"Function with no argument."<<endl;
    }
    
    void fun(int n){
        cout<<"Function with int argument."<<endl;
    }
    
    void fun(double m){
        cout<<"Function with double argument."<<endl;
    }
};

int main(){
    A arya;
    arya.fun();
    arya.fun(4);
    arya.fun(6.3);
}