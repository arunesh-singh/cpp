#include <iostream>
using namespace std;



int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y=1;
        cin>>x;
        while((x^y) > 0 && (x&y) >0){
            y++;
        }

        cout<<y<<endl;
    }
    return 0;
}