#include <iostream>
using namespace std;

class Student{
    private:
    string Name;
    int Age;
    string Course;
    string Address;
    string CollegeName;
    public:

    Student(string name,int age,string course,string address,string collegename){
        Name=name;
        Age=age;
        Course=course;
        Address=address;
        CollegeName=collegename;
    }
    void putDetails(){
        cout<<"Enter name -: ";
        cin>>Name;
        cout<<"Enter your age -: ";
        cin>>Age;
        cout<<"Enter your course -: ";
        cin>>Course;
        cout<<"Enter address -: ";
        cin>>Address;
        cout<<"Enter youre college name -: ";
        cin>>CollegeName;
        cout<<endl;
    }
    void getDetails(){
        cout<<"Student Details -: "<<endl;
        cout<<"Age = "<<Age<<endl;
        cout<<"Course = "<<Course<<endl;
        cout<<"Address = "<<Address<<endl;
        cout<<"College Name = "<<CollegeName<<endl;
    }
    
    void modifyDetails(){
        int s;
        cout<<"Enter number modify following -: "<<endl;
        cout<<"1 for Name "<<endl;
        cout<<"2 for Age"<<endl;
        cout<<"3 for Course"<<endl;
        cout<<"4 for Address"<<endl;
        cout<<"5 for College Name"<<endl;
        cout<<"0 for None"<<endl;
        cin>>s;
        switch (s)
        {
        case 1:
            cin>>Name;
            break;
        
        case 2:
            cin>>Age;
            break;
        
        case 3:
            cin>>Course;
            break;
        
        case 4:
            cin>>Address;
            break;
        
        case 5:
            cin>>CollegeName;
            break;
        
        
        default:
            cout<<"Enter Valid Atrributes"<<endl;
            break;
        }
    }
};

int main(){

    Student S1("Arya",19,"BSC","Azamgarh","ARSD");
    Student S2("Rishu",18,"BSC","Azamgarh","ARSD");
    Student S3("Neeraj",19,"BSC","Haryana","ARSD");
    S1.getDetails();
    cout<<endl;
    
    S2.getDetails();
    cout<<endl;

    S3.getDetails();
    cout<<endl;

/*
    Student std[3];
    for(int i=0;i<3;i++){
        cout<<"Details of Student"<<endl;
        std[i].putDetails();
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<3;i++){
        std[i].getDetails();
        cout<<endl;
    }
    for(int i=0;i<3;i++){
        std[i].modifyDetails();
        cout<<endl;
    }
    for(int i=0;i<3;i++){
        std[i].getDetails();
        cout<<endl;
    }
*/

}