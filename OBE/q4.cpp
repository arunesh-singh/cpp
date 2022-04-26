#include <iostream>
#include <string>
using namespace std;

class Student{
    string name;
    int stipend;
    string course;
    bool intern_status=0;
    public:

    Student(string Name,int Stipend,string Course){
        cout<<"Parametarised constructor called"<<endl;
        name=Name;
        stipend=Stipend;
        course=Course;
    }//parametarised constructor

    Student(string Name,int Stipend,string Course,bool i_status){
        cout<<"Parametarised constructor called for Intern"<<endl;
        name=Name;
        stipend=Stipend;
        course=Course;
        intern_status=i_status;
    }// overloaded parametarised constructor

    Student(Student &a){
        name=a.name;
        stipend=a.stipend;
        course=a.course;
    }//Copy Constructor

    friend ostream& operator<<(ostream& COUT ,Student&Student){
        COUT<<"Name: "<<Student.name<<endl;
        COUT<<"Stipend: "<<Student.stipend<<endl;
        COUT<<"Course: "<<Student.stipend<<endl;
        COUT<<"Intern Status: "<<Student.intern_status<<endl;
        return COUT;
    }

    ~Student(){
        cout<<"Destructor called"<<endl;
    }
};

int main(){
    Student A("Arunesh",10000,"BSC CS");
    Student B("Arya",12000,"BSC CS",1);

    Student C=A;
    cout<<C;
    return 0;
}