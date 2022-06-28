/* Print out the unique or non repetitive element from the array  arr = {1,2,4,5,1,4,2}

ans = 5 
*/

#include <iostream>
using namespace std;

int unique(int arr[],int n){
    int xorsum =0;
    for(int i=0 ; i<n ; i++){
        xorsum = xorsum^arr[i];
    }

    return xorsum;
}


int main(){

    int arr[] = {1,2,4,5,1,4,2};
    cout<<unique(arr,7)<<endl;

    return 0;
}