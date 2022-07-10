#include "bits/stdc++.h"
using namespace std;

bool binarySearch(int arr[], int low, int high, int x){
    
    if (high >= low)
    {
        int mid = (low + high) / 2;
 
        if ((mid == 0 || x > arr[mid - 1]) && (arr[mid] == x))
            return mid;
        else if (x > arr[mid])
            return binarySearch(arr, (mid + 1), high, x);
        else
            return binarySearch(arr, low, (mid - 1), x);
    }
    return -1;
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

    bool isSubset(SET A){
        
        sort(A.set.begin() , A.set.end());
        int arr[size];

        for( int i=0 ; i<size ; i++){
            arr[i] = set[i];
        }
        for( auto element : set ){
            if(binarySearch(arr,0,size,element) == -1){
                return 0;
            }
            
        }

        return 1;

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

    case 1:
        if(B.isSubset(A) == 1){
            cout<<"B is subset of A"<<endl;
        }
        else{
            cout<<"B is not subset of A"<<endl;
        }

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