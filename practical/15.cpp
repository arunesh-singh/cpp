#include <iostream>
using namespace std;

const int r=5,c=5;

template<class T>

class Matrix{
    T m[r][c];
    public:

    void getValue(){
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cout<<"\n M["<<i<<"]["<<j<<"] = ";
                cin>>m[i][j];
            }
        }
    }

    void operator + (Matrix ob){
        T p[r][c];

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                
            }
        }
    }
}