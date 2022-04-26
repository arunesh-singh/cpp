#include <iostream>
#include <cstring>
using namespace std;

class person
{
    protected:
        char name[20];
        int age;
    public:
        person()
        {
            age=0;
            strcpy(name,"");

        }

        person(char n[],int a)
        {
            age=a;
            strcpy(name,n);

        }
        void input()
        {
            cout<<endl<<"Enter name : ";
            cin>>name;
            cout<<endl<<"Enter age : ";
            cin>>age;

        }
        void display()
        {
            cout<<endl<<"Name : "<<name;
            cout<<endl<<"Age : "<<age;


        }

};
class student: public person
{
    protected:
        int roll_no;
        char course[20];
        public:
            student():person()
            {
                roll_no=0;
                strcpy(course,"");
            }
            student(int a, char n[],int r, char c[]):person(n,a)
            {
                roll_no=r;
                strcpy(course,c);
            }
            void input()
            {
                cout<<endl<<"Input student data "<<endl;
                person::input();
                cout<<"Enter roll no :";
                cin>>roll_no;
                cout<<"Enter course :";
                cin>>course;
            }
            void display()
            {
                person::display();
                cout<<endl<<"Roll no : "<<roll_no;
                cout<<endl<<"Course : "<<course;

            }

};
class employee : public person
{
    protected:
        int empno;
        double salary;

    public:
        employee():person()
        {
            empno=0;
            salary=0.0;

        }
        employee(int a, char n[],int e , double s):person(n,a)
        {
            empno=e;
            salary=s;
        }
        void input()
        {
            cout<<endl<<"Input Employee Data ";
            person::input();
            cout<<endl<<"Enter EmpNo ";
            cin>>empno;
            cout<<endl<<"Enter salary ";
            cin>>salary;
        }
        void display()
        {
            person::display();
            cout<<endl<<"EmpNO "<<empno;
            cout<<endl<<"Salary "<<salary;
        }
};


int main()
{
    student s;
    s.input();
    s.display();
    employee e;
    e.input();
    e.display();

    return 0;
}
