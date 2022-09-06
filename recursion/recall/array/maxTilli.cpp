#include <iostream>
using namespace std;

int maxTillI(int n, int arr[]){

    if( n == 0 )
        return arr[n-1];
    
    int mx = arr[0];

    return max(mx , maxTillI(n-- , arr+1));
}

int main(){

    int arr[] = {1,2,3,4,5};
    cout<<maxTillI(5 , arr)<<endl;
}