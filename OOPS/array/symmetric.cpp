#include <iostream>
using namespace std;

class symmetric {

private:
	int n;
	int* arr;

public:
	symmetric(int N)
	{
		n = N;
		arr = new int[N * (N + 1) / 2];
	}
	~symmetric() { delete[] arr; }

	void display(){
        int i,j;
        for( i=1 ; i<=n ; i++){
            for(j=1; j<=n ; j++){
                if(i<j) cout<<arr[j*(j-1)/2+i-1]<<"\t";
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
        if( i<j ) return;
        k = (i*(i-1)/2 + j-1);
        cout<<"Array index pos : "<<k<<endl;
        arr[k] = x;
    }

    int retrive(int i,int j){
        if( i<1 || j<1 || i>n || j>n ){
            cout<<"Out of Bounds";
            return -1;
        }
        if( i<j){

            int temp = i;
            i = j;
            j = temp;
        }
        return arr[i*(i-1)/2+j-1];
    }

	int getN() { return n; }
};

int main()
{
	int n;
    cout<<"Enter no of rows & columns : ";cin>>n;

    symmetric s1(n);
    int i,j,y;
    cout<<"Enter elements STM : \n";
    for( i=1 ; i<=n ; i++ )
        for( j=1 ; j<=i ; j++ ){
            cin>>y;
            s1.store(i,j,y);
        }
    cout<<"The symmetric Triangular matrix is :\n";
    s1.display();
    cout<<"Enter the location for retrival :";cin>>i>>j;
    int res = s1.retrive(i,j);
    cout<<"\nRetrieved value is : "<<res;

    

	return 0;
}
