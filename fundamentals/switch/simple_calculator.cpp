#include <iostream>
using namespace std;

int main(){

    float a,b;
    cout<<"Enter two numbers -:"<<endl;
    cin>>a>>b;
    
    char o;
    cout<<"Enter the operand:"<<endl;
    cin>>o;

    switch (o)
    {
    case '+':
        cout<<a+b<<endl;
        break;
    case '-':
        cout<<a-b<<endl;
        break;
    case '*':
        cout<<a*b<<endl;
        break;
    case '/':
        cout<<a/b<<endl;
        break;
        
    default:
        cout<<"Operator not found"<<endl;
        break;
    }
    return 0;
}