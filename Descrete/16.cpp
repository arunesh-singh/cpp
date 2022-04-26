#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no of vertices : ";
    cin>>n;
    int mat[n][n];
    bool flag=false;

    cout<<"Enter the adjacency matrix of the G :"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j && mat[i][j]==0){
                flag=true;
            }
        }
    }
    if(flag==true){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}