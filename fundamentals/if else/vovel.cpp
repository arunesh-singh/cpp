#include <iostream>
using namespace std;

int main(){
    char c;
    int isLovercaseVovel,isUppercaseVovel;
    cout<<"Enter alphabet\n";
    cin>>c;

    isLovercaseVovel = (c=='a' or c=='e' or c=='i' or c=='o' or c=='u');
    isUppercaseVovel = (c=='A' or c=='E' or c=='I' or c=='O' or c=='U');

    if (isLovercaseVovel,isUppercaseVovel){
        cout<<"It is vovel\n";
    }
    else{
        cout<<"It is constant\n";
    }
        
    return 0;
}