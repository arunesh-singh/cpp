#include <iostream>
using namespace std;

int binarySearch(int arr[],int start, int end, int key){
    int mid = start + (end-start)/2;
    
    if(start>end)
        return -1;

    if(arr[mid]==key)
        return mid;

    else if(arr[mid]<key)
        binarySearch(arr,mid+1,end,key);
    
    else
        binarySearch(arr,start,mid-1,key);

    return -1;
}

int main(){

    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    
    int arr[n];
    cout<<"Enter elements of the array :\n";
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter an element to search : ";
    cin>>key;

    int ans = binarySearch(arr,0,n,key);
    if(ans == -1)
        cout<<"Not Found"<<endl;
    else
        cout<<"Index of element "<<key<<" is "<<ans<<endl;

    return 0;
}