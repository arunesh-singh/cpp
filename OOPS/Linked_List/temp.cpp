#include <iostream>
using namespace std;

void fun(int n){
    for(int i=1 ; i<=n ; i++){
        if( i%2 == 0 )
            cout<<i*i*i<<" ";
    }
}

void fun_recur(int n){
    if( n==1 )
        return;
    if( n%2 == 0 ){
        cout<< n*n*n<<" ";
    }
    fun_recur(n-1);
}

int main(){

    fun(5);
    cout<<endl;
    fun_recur(5);
}