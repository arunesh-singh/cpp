#include<iostream>
using namespace std;

const int r=5,c=5;

template<class T>
class matrix{
    T m[r][c];
    public:
    void get_value(){
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cin>>m[i][j];
            }
        }
    }

    void operator +(matrix ob){
        T p[r][c];

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                p[i][j]=m[i][j]+ob.m[i][j];
                cout<<" "<<p[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    void operator -(matrix ob){
        T p[r][c];

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                p[i][j]=m[i][j]-ob.m[i][j];
                cout<<" "<<p[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    void operator *(matrix ob){
        T p[r][c];

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                p[i][j]=0;
                for(int k=0;k<c;k++){
                    p[i][j]+=(m[i][k] * ob.m[k][j]);
                }
            }
        }

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cout<<" "<<p[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    void transpose(){
        T p[r][c];

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                p[j][i]=m[i][j];
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cout<<" "<<p[i][j]<<" ";
            }
            cout<<"\n";
        }  
    }

    void display(){
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cout<<" "<<m[i][j]<<" ";
            }
            cout<<"\n";
        }
        cout<<"\n\n";
    }
};

int main(){

    matrix<int> m1,m2;
    int ch;

    cout<<"\n Enter Elements of Matrix A\n";
    m1.get_value();
    cout<<"\n Enter Elements of Matrix B\n";
    m2.get_value();

    while(1){
        cout<<"\n----------MATRIX OPERATIONS-----------\n\n";
        cout<<"\n 1. Sum";
        cout<<"\n 2. Difference";
        cout<<"\n 3. Product";
        cout<<"\n 4. Transpose";
        cout<<"\n 5. Display";
        cout<<"\n 0. EXIT\n";
        cout<<"\n Enter your choice: ";
        cin>>ch;

        switch(ch)
        {
        case 1: cout<<"\n\n Matrices Sum \n\n";
            m1 + m2;
            break;
        case 2: cout<<"\n\n Matrices Subtraction \n\n";
            m1-m2;
            break;
        case 3: cout<<"\n\n Matrices Product \n\n";
            m1*m2;
            break;
        case 4: cout<<"\n\n MATRIX A\n";
            m1.display();
            cout<<"\n\n Transposed Matrix\n";
            m1.transpose();
            cout<<"\n\n MATRIX B\n";
            m2.display();
            cout<<"\n\n Transposed Matrix\n";
            m2.transpose();
            break;
        case 5: cout<<"\n\n MATRIX A\n";
            m1.display();
            cout<<"\n\n MATRIX B\n";
            m2.display();
            break;
        case 0: exit(0);
        default: cout<<"\n\n Invalid choice";
        }
    }
    return 0;
}