#include<iostream>
using namespace std;

int noRotation(int arr[] , int low , int high){
    if(high<low)
        return arr[0];
    if(high == low)
        return arr[low];
    int mid = low+(high-low)/2;

    if(mid<high && arr[mid+1]<arr[mid])
        return arr[mid+1];
    if(mid>high && arr[mid]<arr[mid-1])
        return arr[mid];
    if(arr[high]>arr[low])
        return noRotation(arr,low,min-1);
    return noRotation(arr,mid+1,high);
}


int main(){

    int arr1[] = {1, 5, 10, 12, 16, 19, 30};
    int arr2[] = {16, 19, 30, 1, 5, 10, 12};

    cout<<noRotation(arr1 , arr2 , 7);
}