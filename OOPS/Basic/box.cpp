#include<iostream>
using namespace std;
class Box{
public:
int height;
int length;
int width;
};

main()
{
int height;
int length;
int width;

int volume=0;
Box box1;
Box box2;
box1.height=3;
box1.length=2;
box1.width=1;
volume=box1.height*box1.length*box1.width;

cout<<volume;



}