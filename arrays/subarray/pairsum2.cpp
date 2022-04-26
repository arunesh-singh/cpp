#include <iostream>

using namespace std;

int pairsum(int arr[],int n,int k){
    int low=0;
    int high= n-1;
    
    while (low>high)
    {
        if(arr[low]+arr[high]==k){
            return true;
        }
        else if(arr[low]+arr[high]>k){
            high--;
        }
        else{
            low++;
        }
    }
    return false;
    
}
int main(){
    int n=9;
    int arr[]={4,5,10,43,57,91,45,9,7};
    int k=9;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int i,j,key;
    for(i=1;i<n;i++){
        key=arr[i];
        j=i;
        while (arr[j-1]>key && j>=1)
        {
            arr[j]=arr[j-1];
            j--;
        }
        arr[j]=key;
    }
    cout<<pairsum(arr,n,k)<<endl;
    return 0;
}