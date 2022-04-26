#include<iostream>
using namespace std;

class X
{
    static const int i = 5;
};

const int X::i;

int main()
{
    X O;
    cout<<"i="<<X::i; // member "X::i" is inaccessible 
    getchar();
    return 0;
}