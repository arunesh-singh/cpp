#include <iostream>
using namespace std;

//Multi Level Inheritance
class A{
    public:
    
    void funcA(){
        cout<<"Func A"<<endl;
    }
};

class B : public A {
    public:

    void funcB(){
        cout<<"Func B"<<endl;
    }
};

class C : public B {
    public:
};

int main(){
    C c;
    c.funcA();
    c.funcB();
}