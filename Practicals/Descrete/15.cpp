#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter the highest power of x : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the coefficient of x (degree 0 to "<<n<<") : ";
    for(int i=0 ; i<=n ; i++){
        cin>>arr[i];
    }

    int k;
    cout<<"Enter the value of x : ";
    cin>>k;

    int ans = 0;

    for(int i=0 ; i<=n ; i++){
        ans += arr[i]*pow(k,i);
    }

    cout<<"The value of f("<<k<<")  is "<<ans<<endl;
}