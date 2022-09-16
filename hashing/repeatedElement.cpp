//  Give an algorithm for printitng the first reapeated character if there are duplicates elements in it. 

#include <iostream>
using namespace std;

void firstRepeatedChar(string &str){


    int arr[256];
    for(int i=1 ; i<=256 ; i++)
        arr[i] = 0;
    int i;
    for(i=0 ; i<str.length() ; i++ ){

        if( arr[str[i]] == 1 ){
            cout<<str[i]<<endl;
            break;
        }
        else
            arr[str[i]]++;
    }

    if( i == str.length() )
        cout<<"No Repeated Character."<<endl;
}

void firstRepeatedNum(int arr[] , int len){

    int arr2[10];
    for(int i=0 ; i<10 ; i++)
        arr[i] = 0;
    int i;
    for(i=0 ; i<len ; i++ ){

        if( arr2[arr[i]] == 1 ){
            cout<<arr[i]<<endl;
            break;
        }
        else
            arr2[arr[i]]++;
    }
    if( i== len )
        cout<<"No repeated num\n";
}

int main(){
    string a = "AruneshA";
    int b[] = {4,3,6,2,4,2,2};
    firstRepeatedNum(b,7);
}