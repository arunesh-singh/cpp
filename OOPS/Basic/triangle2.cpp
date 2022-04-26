#include <iostream>
using namespace std;

class Triangle{
    float A,B,C,H;
    public:
    Triangle(float a,float b,float c){
        A=a;
        B=b;
        C=c;
    }
    Triangle(float b,float h){
        B=b;
        H=h;
    }
    float area(float a,float b,float c){
        float s;
        return sqrt(s*(s-a)(s-b)(s-c));
    }
    float area(float b,float h){
        return (b*h)/2;
    }
    Triangle& Triangle::operator = (const Triangle &triangle){
		A = triangle.a;
		B = triangle.b;
		C = triangle.c;
		return *this;
	}
    friend bool operator == (const Triangle&T1,const Triangle&T2){
        return (T2.A==T1.A && T2.B==T1.B && T2.C==T2.C);
    }

};

int main(){
    Triangle triangleABC(18,30,24);
	cout<<"Area of the tringle ABC with sides 18,30,24: "<<triangleABC.area(18,30,24)<<"\n";


	Triangle triangleBH;
	cout<<"Area of the tringle with base 24 and height 18: "<<triangleBH.area(24,18)<<"\n";;


	Triangle triangleCopy=triangleABC;
	cout<<"Area of the copy tringle with base 24 and height 18: "<<triangleCopy.area()<<"\n";;


	if(triangleABC==triangleCopy){
		cout<<"The triangles are equal.\n";
	}else{
		cout<<"The triangles are not equal.\n";
	}
    return 0;
}