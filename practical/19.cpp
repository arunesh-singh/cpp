#include <iostream>
using namespace std;

class box{
    private:
        float length;
        float breadth;
        float height;
    public:
        box();
        box(box &);
        box(float,float,float);
        ~box() {}

        void show();
        void iscube();
        float calculatevolume();
        float calculatesurfacearea();

        box operator + (box &);
        box operator = (box &);
        friend void operator ==(box &, box &);

};
box::box()
{
    length=breadth=height=0;
}
box::box(box &o)
{
    length=o.length;
    breadth=o.breadth;
    height=o.height;
}
box::box(float a,float b,float c)
{
    length=a;
    breadth=b;
    height=c;
}
void box::show()
{
    cout<<"Length :"<<length<<" units \n";
    cout<<"Breadth :"<<breadth<<" units \n";
    cout<<"Height :"<<height<<" units \n";
    return;
}
void box::iscube()
{
    if(length==breadth && breadth==height && height==length)
    cout<<"Box is cube .";
    else cout<<"Box is cuboid.";
    cout<<endl;
    return;
}
float box::calculatevolume()
{
    return length*breadth*height;
}
float box::calculatesurfacearea()
{
    return 2*((length*breadth)+(breadth*height)+(height*length));
}
box box::operator +(box &o)
{
    box temp(*this);
    temp.length +=o.length;
    temp.breadth +=o.breadth;
    temp.height +=o.height;
    return temp;
} 
box box::operator = (box &o)
{
    length=o.length;
    breadth=o.breadth;
    height=o.height;
    return *this;
}
void operator == (box &a,box &o)
{
    if(a.length==o.length && 
        a.breadth==o.breadth &&
        a.height==o.height)
        cout<<"Boxes are equal.";
    else    cout<<"Boxes are not equal.";
    cout<<endl;
    return;

}


int main()
{
    box c;
    int l,b,h;
    cout<<"\nEnter dimensions of box 1 : ";
    cin>>l>>b>>h;
    box A(l,b,h);
    cout<<"Enter dimensions of box 2 : ";
    cin>>l>>b>>h;
    box B(l,b,h);
    cout<<endl;
    cout<<"Box 1 \n";
    cout<<"------ \n";
    A.show();
    cout<<endl;
    cout<<"Box 2 \n";
    cout<<"------ \n";
    B.show();
    cout<<endl;
    cout<<"Surface Area \n";
    cout<<"---------\n";
    cout<<"Box 1 : "<<A.calculatesurfacearea()<<" square units "<<endl;
    cout<<"Box 2 : "<<B.calculatesurfacearea()<<" square units "<<endl;
    cout<<endl;
    cout<<"Volume \n";
    cout<<"--------- \n";
    cout<<"Box 1 : "<<A.calculatevolume()<<" cubic units "<<endl;
    cout<<"Box 2 : "<<B.calculatevolume()<<" cubic units "<<endl;
    cout<<endl;
    cout<<"Sum of Boxes 1 and Boxes 2 \n";
    cout<<"----------- \n";
    (A+B).show();
    cout<<endl;
    cout<<"Assigning Box 1 to Box 3 \n\n";
    c=A;
    cout<<"Equality of Box 1 and Box 2 \n\n";
    cout<<"-----------\n";
    A==B;
    cout<<endl;
    cout<<"Equality of Box 1 and Box 3 \n\n";
    cout<<"-----------\n";
    A==c;
    cout<<endl;
    



    return 0;
}
