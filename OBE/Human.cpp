#include <iostream>
#include <string>
using namespace std;

class Human{
    protected:
    string Name;
    int Age;
    

    public:
    Human(string name,int age){
        Name=name;
        Age=age;
    }
    virtual void printDetails(){
        cout<<"Name = "<<Name<<endl;
        cout<<"Age = "<<Age<<endl;
    }
};

class Adult : public Human {
    public:
    int voterID;
    
    Adult(string name,int age,int voterid) 
        : Human(name,age)
    {
        if( age >= 18 )
            voterID=voterid;
        else
            cout<<"You are a Child"<<endl;
    }
    void printDetails(){
        Human::printDetails();
        cout<<"Voter ID = "<<voterID<<endl;
    }
};

class Child : public Human {
    public:
    string schoolName;
    
    Child(string name,int age,string schoolname) : Human(name,age){
        if( age < 18 && age > 0 )
            schoolName=schoolname;
        else
            cout<<"The age of a child should be in the range 0 to 18"<<endl;
    }
    void printDetails(){
        Human::printDetails();
        cout<<"School Name = "<<schoolName<<endl;
    }
};

int main(){
    Adult A = Adult("Arunesh Singh",20,1234);
    Child B = Child("Arya",17,"KV");
    Human* h1=&A;
    Human* h2=&B;

    h1->printDetails();
    cout<<endl;
    h2->printDetails();
    return 0;
}