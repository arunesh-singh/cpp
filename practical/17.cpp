#include <iostream>
using namespace std;
 
class Triangle
{
    private:
        int base,height;
        float area,perimtr;
    public:
        int choice;
    Triangle()
    {
        base=0;
        height=0;
    }
    void input();
    void operator =(const Triangle &a)
    {
        base=a.base;
        height=a.height;
    }
    void operator ==(const Triangle &a)
    {
        if(base==a.base && height==a.height)
            cout<<"\nEqual"<<endl;
        else
            cout<<"\nUnequal"<<endl;
    }  
    void calcArea( );
    void calcArea(int a , int b);
    friend void menu();
};

void menu()
{
    cout<<"\n1.Calculate Area of Triangle 1"<<endl;
    cout<<"2.Calculate Area of Triangle 2"<<endl;
    cout<<"3.Overload Area Calculation"<<endl;
    cout<<"4.Assign A to C"<<endl;
    cout<<"5.Check Equality of A and B"<<endl;
    cout<<"6.Check Equality of A and C"<<endl;
    cout<<"7.Exit"<<endl;
    cout<<"\nEnter your choice : ";
}

void Triangle::input()
{
    cout<<"\nEnter base : ";
    cin>>base;
    cout<<"Enter height : ";
    cin>>height;
}
void Triangle::calcArea()
{
    area=0.5*base*height;
    cout<<"\nArea of the triangle is "<<area<<endl;
}
 
void Triangle::calcArea(int a, int b)
{
    area=0.5*a*b;
    cout<<"\nArea(overloaded) of the triangle is "<<area<<endl;
}
 
int main()
{
    int ch,b,h;
    Triangle t1,t2,t3;
    cout<<"\nMeasurements for triangle 1 :"<<endl;
    t1.input();
    cout<<"\nMeasurements for triangle 2 :"<<endl;
    t2.input();
    do{
        menu();
        cin>>ch;
        switch(ch)
        {
            case 1:
                t1.calcArea();
                break;
            case 2:
                t2.calcArea();
                break;
            case 3:
                cout<<"\nArea Calculation with overloaded function."<<endl;
                cout<<"\nEnter base : "<<endl;
                cin>>b;
                cout<<"Enter height : "<<endl;
                cin>>h;
                t1.calcArea();
                break;
            case 4:
                t3=t1;
                break;
            case 5:
                t1==t2;
                break;
            case 6:
                t1==t3;
                break;
            default:
                if(ch==7)
                    cout<<"\nTask Closed.\n"<<endl;
                else
                    cout<<"\nWrong Input.\n" <<endl;
                    break;
        }
    }while(ch !=7);
    return 0 ;
}
