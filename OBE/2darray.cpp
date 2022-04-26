#include <bits/stdc++.h>
using namespace std;

void setArrData(int arr[][],int row,int col){
    for(int i =0 ;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
}

void printArrData(int arr[][],int row,int col){
    for(int i =0 ;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j];
        }cout<<endl;
    }
}

int getAverage(int arr[][],int row,int col){
    int total=0;
    int count=0;
    for(int i =0 ;i<row;i++){
        for(int j=0;j<col;j++){
            total+=arr[i][j];
            count++;
        }cout<<endl;
    }
    return float(total/count);
}

void findMax(int arr[][],int row,int col){
    for(int i=0;i<col;i++){
        int maxm=arr[0][i];
        for(int j=1;j<row;j++){
            if(arr[j][i]>maxm)
                maxm=arr[j][i];
        }
        cout<<maxm<<endl;
    }
}

int main(){
    const int n=4,m=4;
    int mat[n][m];
    setArrData(mat,n,m);
    printArrData(mat,n,m);
    getAverage(mat,n,m);
    findMax(mat,n,m);
    
    return 0;
}