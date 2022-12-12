/*
    I have cerated 2 vectors. The first vector will take edge as 
    input from from user. Then by using createAdjMAtrix function
    we are converting the first vector into Adjacency Matrix(vector 2)
*/

#include "bits/stdc++.h"
using namespace std;

void createAdjMatrix(int Adj[][N + 1],
                     int arr[][2])
{
  
    // Initialise all value to this
    // Adjacency list to zero
    for (int i = 0; i < N + 1; i++) {
  
        for (int j = 0; j < N + 1; j++) {
            Adj[i][j] = 0;
        }   
    }
  
    // Traverse the array of Edges
    for (int i = 0; i < M; i++) {
  
        // Find X and Y of Edges
        int x = arr[i][0];
        int y = arr[i][1];
  
        // Update value to 1
        Adj[x][y] = 1;
        Adj[y][x] = 1;
    }
}

void print(vector<vector<int>> Adj,vector<vector<int>> arr)
{
    // Traverse the vector of Edges
    for (int i = 0; i < arr.size(); i++) {
  
        // Find X and Y of Edges
        int x = arr[i][0];
        int y = arr[i][1];
  
        // Update value to 1
        Adj[x][y] = 1;
        Adj[y][x] = 1;
    }

    
}

int main(){
    int e,v;
    cout<<"Enter no of vertices and edges : ";
    cin>>v>>e;

// Very wiered way of push_back into vector
    vector<vector<int>> mat(e,vector<int>(2));
    for(int i = 0; i<e; i++){
        vector<int> temp;
        int j,k;
        cin>>j>>k;
        temp.push_back(j);
        temp.push_back(k);
        mat.push_back(temp);
    }

    // printing Matrix
    for(int i; i<Adj.size() ; i++){
        for(int j; j<Adj[i].size() ; j++){
            cout<<Adj[i][j]<<" ";
        }cout<<endl;
    }

    //To check if it is complex or not
    bool flag=false;

    for(int i=0;i<Adj.size();i++){
        for(int j=0;j<Adj.size();j++){
            if(i==j && Adj[i][j]==0){
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