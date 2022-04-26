#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int mat[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }
    int x;
    cin>>x;
    bool flag=false;
    int r=0,c=m-1;
    while(r < n and c >= 0 ){
        if(mat[r][c]==x){
            flag=true;
        }
        if(mat[r][c]>x){
            c--;
        }
        else{
            r++;
        }
    }
    if(flag){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }

    return 0;
}



