#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int row_start=0;
    int row_end=n-1;
    int column_start=0;
    int column_end=m-1;

    while(row_start <= row_end && column_start <= column_end){
        for(int col=column_start;col<=column_end;col++){
            cout<<arr[row_start][col]<<" ";
        }
        row_start++;
        for(int row=row_start;row<=row_end;row++){
            cout<<arr[row][column_end]<<" ";
        }
        column_start++;
        for(int col=column_end)

        
    }
    cout<<endl;
    
    return 0;
}