#include <iostream>
using namespace std;

class AbstractEmployee{
    virtual void AskForPromotion()=0;
};

class Employee:AbstractEmployee{
    private:
    string Company;
    int Age;

    protected:
    string Name;

    public:
    Employee(string name,string company,int age){
        Name=name;
        Company=company;
        Age=age;

    }
    
    void setter (string name,string company,int age){
        Name=name;
        Company=company;
        Age=age;
    }
    /*
    string GetName(){
        return Name;
    }
    int GetAge(){
        return Age;
    }
    string GetCompany(){
        return Company;
    }
    */
    void AskForPromotion(){
        if(Age>30){
            cout<<Name<<" Got Promoted "<<endl;
        }
        else{
            cout<<Name<<" Sorry Buddy "<<endl;
        }
    }
    virtual void Work(){
        cout<<Name<<" is checking email, task backlog, performing tasks..."<<endl;
    }
};

class Developer: public Employee{
    public:
    string FavProgramingLang;
    Developer(string name,string company,int age,string favProgramingLang)
        :Employee(name,company,age)
    {
        FavProgramingLang=favProgramingLang;
    }
    void FixBug(){
        cout<<Name<<" fixed bug using "<<FavProgramingLang<<endl;
    }
    void Work(){
        cout<<Name<<" is writing "<<FavProgramingLang<<" code."<<endl;
    }
};

class Teacher : public Employee{
public:
    string Subject;

    Teacher(string name,string company,int age,string subject)
        :Employee(name,company,age)
    {
        Subject=subject;
    }
    void PrepareLesson(){
        cout<<Name<<" is prepairing "<<Subject<<" lesson. "<<endl;
    }
    void Work(){
        cout<<Name<<" is teaching "<<Subject<<" code."<<endl;
    }
};

int main(){

    Developer d=Developer("Arya","Gubbins",22,"C++");
    Teacher t=Teacher("Arunesh","Cool",35,"English");
    Employee* e1=&d;
    Employee* e2=&t;

    e1->Work();
    e2->Work();
    return 0;
}

