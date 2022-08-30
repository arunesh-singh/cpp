#include <iostream>
using namespace std;

int main(){

    int t;
    cin>>t;

    int out = 1;

    while(t--){


        int n, m,tc=0;
        cin>>n>>m;

        for(int i=0 ; i<n; i++){

            int a;
            cin>>a;
            tc+=a;
        }
        
        int ans = tc/m;

        cout<<"Case #"<<out++<<": "<<tc-(m*ans)<<endl;
    }
    
    
}