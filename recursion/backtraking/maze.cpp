#include <iostream>
using namespace std;

int countPath(int n , int m ){

    if( n == 1 || m == 1)
        return 1;
    
    return countPath(n-1, m ) + countPath(n-1, m-1) + countPath( n , m-1);
}

void path( string p , int r, int c){

    if( r==1 && c==1){
        cout<<p<<endl;
        return;
    }

    if( r> 1)
        path( p + "D" ,  r-1 , c);
    if( c > 1 )
        path( p + "R" , r , c-1);
    if( r>1 && c>1)
        path( p + "A" , r-1 , c-1);

}

int obstacle(int *arr , int r , int c){
    
    if( r == 3 || c == 3)
        return 1;
    
    if( arr[r][c] == 0 ){
        return obstacle(arr,r-1,c) + obstacle(arr,r,c-1);

    }
    return obstacle(arr,r,c);
}


int main(){

    int arr[][] = { {0 , 0 , 0},
                    {0 , 1 , 0}
                    {0 , 0 , 0}};

    // cout<<countPath(3,3)<<endl;
    // path("",3,3);

    cout<<obstacle(arr,0,0);
    return 0;
}