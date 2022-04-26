// O(n)
#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int curSum=0;
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        curSum+=a[i];
        if(curSum<0){
            curSum=0;

        }
        mx=max(curSum,mx);
    
    }
    cout<<mx<<endl;

    return 0;
}