#include <iostream>
using namespace std;

int main(){

    float a,b;
    cout<<"Enter two numbers -:"<<endl;
    cin>>a>>b;
    
    int o;
    cout<<"Enter the number(Sum=1,Minus=2):"<<endl;
    cin>>o;

    switch (o)
    {
    case 1:
        cout<<a+b<<endl;
        break;
    case 2:
        cout<<a-b<<endl;
        break;
    case 3:
        cout<<a*b<<endl;
        break;
    case 4:
        cout<<a/b<<endl;
        break;
        
    default:
        cout<<"Operator not found"<<endl;
        break;
    }
    return 0;
}