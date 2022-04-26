#include <iostream>
using namespace std;

int main(){

    int rows;
    cout<<"Enter rows-:"<<endl;
    cin>>rows;
    
    int columns;
    cout<<"Enter colums-:"<<endl;
    cin>>columns;

    for(int i=1;i<=columns;i++){
        for(int j=1;j<=rows;j++){
            if(i==1 || i==rows){
                cout<<"*";
            }
            else if(j==1 || j==columns){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
    return 0;
}