#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,count=0;
        cin>>n;
        
        int arr[n];

        for(int i=0 ; i<n; i++){

            cin>>arr[i];
        }

        for(int i=0 ; i<n; i++){
            int cnt = 0;
            if(arr[i]%2==0){
                count++;
            }
        }

        


    }
    return 0;
}