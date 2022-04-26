#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    int maxNo=INT_MIN; // -9459869
    int minNo=INT_MAX;//  89458969

    for(int i=0;i<n;i++){
        if(array[i]>maxNo){
            maxNo=array[i];
        }
        if(array[i]<minNo){
            minNo=array[i];
        }
    }
    cout<<"max no is "<<maxNo<<endl;
    cout<<"min no is "<<minNo<<endl;

    return 0;
}