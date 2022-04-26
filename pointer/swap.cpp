#include<iostream>
using namespace std;

class X{
private:
    int a;
    static int b;
public:
    void set(int i){a=I;}
    static void display()
    {
        cout<<” The value of a:”<<a; 
        cout<<”The value of b:”<<b;
    }
}

X:: b=0;

int main()
{
    X O;
    O.set(5);
    O.display();
    return 0;
}
/*
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
 cout<<”i=”<<X::i;
 getchar();
 return 0;
}
*/