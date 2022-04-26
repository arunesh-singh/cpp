#include <iostream>
using namespace std;

int main(){
    int age;
    cin>>age;

    if (age>=18){
        cout<<"You can vote.";
    }
    else{
        cout<<"You are not eligible.";
    }

    return 0;
}