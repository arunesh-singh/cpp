
#include "bits/stdc++.h"
#include <iostream>
using namespace std;

int main(){

    int array[3][4]={{1,2,3,4},{5,6,7,8},{9,0,1,2}};
  
    // swaping of column 2 and 3

    cout<<"-- Original Array --"<<endl;
    for(int i=0; i<3 ; i++ ){
        for(int j=0; j<4 ; j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }

    if()
    for(int i=0; i<3 ; i++ ){
        for(int j=0; j<4 ; j++){
            int temp;
            if( j==1 ){
                temp = array[i][j];
            }
            if( j==2 ){
                array[i][j-1] = array[i][j] ;
                array[i][j] = temp ;
            }
        }
    }

    cout<<"-- Array After Swapping Column 2 and 3 --"<<endl;
    for(int i=0; i<3 ; i++ ){
        for(int j=0; j<4 ; j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}