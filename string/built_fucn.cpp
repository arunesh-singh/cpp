#include<iostream>
#include<string>

using namespace std;

int main(){
    
    string abc="hippopotomatus";
    string s1="abc";
    string s2="xyz";
    string s3="452";
    cout<<abc<<endl;

    int s=stoi(s3);
    cout<<s<<endl;

    cout<<to_string(s)+"4"<<endl;

    //cout<<abc.substr(5,5);

    //cout<<abc.size()<<endl;
    //cout<<abc.length()<<endl;

    //for(int i=0;i<abc.length();i++)
    //    cout<<abc[i]<<endl;

    //cout<<abc.insert(2,"lo")<<endl;

    //cout<<abc.find("pop")<<endl;

    //abc.erase(5,5);
    //cout<<abc<<endl;

    //abc.clear();
    //if(!abc.empty())
    //    cout<<"string is not emplty"<<endl;

    //if(!s1.compare(s2))
    //    cout<<"strings are equal"<<endl;

    return 0;
}