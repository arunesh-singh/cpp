#include<iostream>     // header file should be defined first
using namespace std;

class X{   // First character should be small to define class
private:
    int a,b;
    
    public:
    void update(int x, int y); // parameters should not be predefined

    void read(){
        cout<<"Enter the value of a:";
        cin>>a;
        cout<<"Enter the value of b:";
        cin>>b;
    }
    void print(){
    cout<<"a="<<a<<" "<<"b="<<b;
    }
};

void X::update(int x,int y){
    a=x;
    b=y;
}

int main(){
    X O;
/*  We cannot access a and b directly
    O.a=10;
    O.b=20; 
*/
    O.update(2,3);
    O.print();
    return 0;
}