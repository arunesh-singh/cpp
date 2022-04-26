#include <iostream>
using namespace std;

int main(){
    int n,m;
    char ch = 'A';
    cout<<"Enter no of vertices and edges : ";
    cin>>n>>m;
    int mat[n][m];
    

    cout<<"Enter the Incidence matrix of the G :"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }
    for(int i=0;i<n;i++){
        int indeg=0,outdeg=0;
        for(int j=0;j<m;j++){
            if(mat[i][j]==-1)
                indeg++;
            
            if(mat[i][j]==1)
                outdeg++;
            
        }
        cout<<"\nindegree("<<ch<<") = "<<indeg<<endl;
        cout<<"outdegree("<<ch++<<") = "<<outdeg<<endl;
        
    }
    
}