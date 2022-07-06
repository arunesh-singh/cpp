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
    SET() {
        int n;
        cout<<"Enter no of elements : ";
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

        bool flag = false;
        int arr[size];

        for( int i=0 ; i<size ; i++){
            arr[i] = set[i];
        }
        for( auto element : set ){
            if(binarySearch(arr,0,size,element)){
                flag = true;
            }
        }

        return flag;
    };
};

int main(){

    SET A = new SET();
    SET B = new SET();

    cout<<B.isSubset(A)<<endl;
}