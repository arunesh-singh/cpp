#include <iostream>
using namespace std;


int main(){

    int v,e;
    cout<<"Enter no of vertices and edges : ";
    cin>>v>>e;

    int edge[e][2];

    for(int i=0; i<e; i++){
        for(int j=0 ; j<2 ; j++){
            cin>>edge[i][j];
        }
    }
/* 
    for(int i=0; i<e; i++){
        for(int j=0 ; j<2 ; j++){
            cout<<edge[i][j]<<" ";
        }cout<<endl;
    } */

    cout<<"helo"<<endl;

    int adjMat[v][v];

    cout<<"helo"<<endl;
    
    for(int i=0; i<v; i++){
        for(int j=0 ; j<v; j++){
            adjMat[i][j]=0;
        }
    }
    cout<<"helo"<<endl;

    for(int i=0; i<e; i++){
    // cout<<"helo"<<endl;
        int x,y;
        x = edge[e][0]-1;
        y = edge[e][1]-1;
        adjMat[x][y] = 1; 
        adjMat[y][x] = 1; 
    }

    for(int i=0 ; i<v ; i++){
        for(int j=0 ; j<v ; j++){
            cout<<adjMat[i][j]<<" ";
        }
        cout<<endl;
    }

}