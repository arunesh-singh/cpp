#include "bits/stdc++.h"
#include <iostream>
#include<string>
using namespace std;

class student{
public:
    string name;

    int age;
    bool gender;

    student(){
        cout<<"Default Construstor"<<endl;
    }//default constructor
    
    student(string s,int a,int g){
        cout<<"Parametarised Constructor"<<endl;
        name=s;
        age=a;
        gender=g;
    }//parametarised constructor

    student(student &a){
        cout<<"Copy Constructor"<<endl;
        name=a.name;
        age=a.age;
        gender=a.gender;
    }//Copy Constructor

    ~student(){
        cout<<"Destructor called"<<endl;
    }//Destructor
/*
    void setName(string s){
        name=s;
    }// Setters

    void getName(){
        cout<<name<<endl;
    }//Getters
*/
    bool operator == (student &a) {
        if(name==a.name && age==a.age && gender==a.gender){
            return true;
        }
        else{
            return false;
        }
    }//Operator Overloading

    void printInfo(){
        cout<<"Name = ";
        cout<<name<<endl;
        cout<<"Age = ";
        cout<<age<<endl;
        cout<<"Gender = ";
        cout<<gender<<endl;
    }
}; 

int main(){
    /*
    student arr[3];
    for(int i=0;i<3;i++){
        string s;
        cin>>s;
        arr[i].setName(s);
        //cin>>arr[i].name;
        cin>>arr[i].age;
        cin>>arr[i].gender;
    }
    for(int i=0;i<3;i++){
        arr[i].printInfo();
    }
    */
    student a("Arya",19,0);
    //a.printInfo();
    student b("Ashu",21,0);
    student c=a;
    if(c==a){
        cout<<"Same"<<endl;
    }
    else{
        cout<<"Not Same"<<endl;
    }
    return 0;
}