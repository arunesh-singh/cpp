#include <iostream>
using namespace std;

class lover {

private:
	int n;
	int* arr;

public:
	lover(int N)
	{
		n = N;
		arr = new int[N * (N + 1) / 2];
	}
	~lover() { delete[] arr; }

	void display(){
        int i,j;
        for( i=1 ; i<=n ; i++){
            for(j=1; j<=n ; j++){
                if(i<j) cout<<"0\t";
                else cout<<arr[i*(i-1)/2+j-1]<<"\t";
            }
            cout<<endl;
        }
    }

    void store(int i,int j , int x){
        int k=0 ; 
        if( i<1 || j<1 || i>n || j>n ){
            cout<<"Out of Bounds";
            return;
        }
        if( i>= j && x!=0){
            k = (i*(i-1)/2 + j-1);
            arr[k] = x;
        }
        else cout<<"\nmust be zero";
    }

    int retrive(int i,int j){
        if( i<1 || j<1 || i>n || j>n ){
            cout<<"Out of Bounds";
            return -1;
        }
        if( i<j)
            return 0;
        else
            return arr[i*(i-1)/2+j-1];
    }

	int getN() { return n; }
};

int main()
{
	int n;
    cout<<"Enter no of rows & columns : ";cin>>n;

    lover l1(n);
    int i,j,y;
    char ch;
    do{
        cout<<"Enter the element, row, column of LTM :\n";
        cin>>y>>i>>j;
        l1.store(i,j,y);
        cout<<"Enter your choice : ";cin>>ch;
    }while(ch == 'y' || ch == 'Y');
    cout<<"The Lover Triangular matrix is :\n";
    l1.display();
    cout<<"Enter the location for retrival :";cin>>i>>j;
    int res = l1.retrive(i,j);
    cout<<"\nRetrieved value is : "<<res;

    

	return 0;
}
