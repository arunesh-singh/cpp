#include <iostream>
using namespace std;

//Single Inheritance
class A{
    public:
    
    void func(){
        cout<<"Inherited"<<endl;
    }
};

class B : public A{};

int main(){
    B b;
    b.func();
}