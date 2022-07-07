#include "bits/stdc++.h"
using namespace std;

bool binarySearch(int arr[], int start, int end, int data){
    int mid = start + ( end - start )/2;
    if(data==mid){
        return true;
    }
    else if(data>mid){
        binarySearch(arr,mid+1,end,data);
    }
    else{
        binarySearch(arr,start,mid-1,data);
    }

    return false;
}

class SET{
    
    int size;
    vector<int> set;

    public:
    SET(int n) {

        size = n;

        cout<<"\nEnter the elements : ";
        for(int i=0 ; i<size ; i++){
            int t;
            cin>>t;
            set.push_back(t);
        }
    }

    void isSubset(SET A){
        
        sort(A.set.begin() , A.set.end());

        bool flag;
        int arr[size];

        for( int i=0 ; i<size ; i++){
            arr[i] = set[i];
        }
        for( auto element : set ){
            flag = binarySearch(arr,0,size,element);
        }

        if(flag){
            cout<<"B is subset of A"<<endl;
        }
        else{
            cout<<"B is not subset of A"<<endl;
        }
    }
};

void menu(SET A, SET B){

    cout<<"\n1. isSubset";
    cout<<"\n2. Union";
    cout<<"\n3. Intersection";
    cout<<"\n4. Complement";
    cout<<"\n5. Set Difference";
    cout<<"\n6. Symmetric Difference";
    cout<<"\n7. Cartesian Product";
    cout<<"\n0. Exit\n";

    int t;
    cout<<"\nEnter a number to perform operation : \n";
    cin>>t;

    switch (t)
    {
    case 0:
        return;
        break;

    case 1:
        B.isSubset(A);
        break;

    
    default:
        cout<<"Invalid Input"<<endl;
        break;
    }

    return menu(A,B);
}


int main(){

    int n,m;
    cout<<"\nEnter no of elements of set A : ";
    cin>>n;
    SET A(n);
    
    cout<<"\nEnter no of elements of set B : ";
    cin>>m;
    SET B(m);

    menu(A,B);

    return 0;

}