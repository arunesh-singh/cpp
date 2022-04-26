#include<iostream>
using namespace std;

class Person{
    public:
    string Name;
    int Age;
    bool Gender;

    Person(string name,int age,bool gender){
        Name=name;
        Age=age;
        Gender=gender;
    }
    ~Person(){
        cout<<"Object is deleted."<<endl;
    }
    void display(){
        cout<<"Name: "<<Name<<endl;
        cout<<"Age: "<<Age<<endl;
        if(Gender){
            cout<<"Gender: Female"<<endl;
        }
        else{
            cout<<"Gender: Male"<<endl;
        }
    }
    
};

class Teacher: public Person
{
    public:
    string Subject;
    Teacher(string name,int age,bool gender,string subject)
    :Person(name,age,gender){
        Subject=subject;
    }
    /*
    ~Teacher(){
        cout<<"Object is deleted."<<endl;
    }*/
    void display(){
        cout<<"Name: "<<Name<<endl;
        cout<<"Age: "<<Age<<endl;
        if(Gender){
            cout<<"Gender: Female"<<endl;
        }
        else{
            cout<<"Gender: Male"<<endl;
        }
        cout<<"Subject: "<<Subject<<endl;
    }
};

class Student: public Person{
    public:
    string Course;
    Student(string name,int age,bool gender,string course)
    :Person(name,age,gender){
        Course=course;
    }
    ~Student(){
        cout<<"Object is deleted."<<endl;
    }
    void display(){
        cout<<"Name: "<<Name<<endl;
        cout<<"Age: "<<Age<<endl;
        if(Gender){
            cout<<"Gender: Female"<<endl;
        }
        else{
            cout<<"Gender: Male"<<endl;
        }
        cout<<"Course: "<<Course<<endl;
    }
};

int main(){

    Teacher T1("Parul Jain",40,1,"CS");
    Student S1("Arunesh",20,0,"BSC H. CS");
    Person* p1=&T1;
    Person* p2=&S1;

    p1->display();
    cout<<endl;
    p2->display();
    
    return 0;
}