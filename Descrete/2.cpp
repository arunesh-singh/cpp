#include "bits/stdc++.h"
using namespace std;


class SET{
    
    public:
    int size;
    vector<int> set;

    SET(int n) {

        size = n;

        cout<<"\nEnter the elements : ";
        for(int i=0 ; i<size ; i++){
            int t;
            cin>>t;
            set.push_back(t);
        }
    }
    
};

int isSubset(vector<int> A, vector<int> B)
{

    sort(A.begin(), A.end());
    
    for (auto element : B)
    {
        if (binary_search(A.begin(), A.end(), element) == false)   
        {
            return 0;
        }
    }

    return 1;
}

vector<int> unionSet(vector<int> A, vector<int> B)
{

    sort(A.begin(), A.end()) ;

    for (auto element : B )
    {
        if(binary_search(A.begin(),A.end(),element) == false)
            A.push_back(element);
    }

    return A;
}

vector<int> intersectionSet(vector<int> A, vector<int> B)
{
    vector<int> iSet;

    sort(A.begin(), A.end());

    for(auto element : B)
    {
        if(binary_search(A.begin(),A.end(),element) == true)
            iSet.push_back(element);
    }

    return iSet;
}

vector<int> complement(vector<int> A, vector<int> B)
{
    vector <int> cset;

    sort(A.begin(), A.end());

    for (auto element : B)
    {
        if (binary_search(A.begin(), A.end(), element) == false)
            cset.push_back(element);
    }

    return cset;
}

vector<int> SetDiff(vector<int> A, vector<int> B)
{
    vector<int> set_diff;
    vector<int> iset(intersectionSet(A,B));

    sort(A.begin(), A.end());

    for (auto element : A)
    {
        for(auto ele : iset){
            if(ele == element){
                continue;
            }
            set_diff.push_back(element);
        }
    }

    return set_diff;
}

vector<int> SymmDiff(vector<int> A, vector<int> B)
{
    vector <int> uset(unionSet(A,B));
    vector <int> iset(intersectionSet(A,B));

    return SetDiff(uset,iset);
}

void menu(SET A, SET B){

    cout<<"\n1. isSubset";
    cout<<"\n2. Union";
    cout<<"\n3. Intersection";
    cout<<"\n4. Complement";
    cout<<"\n5. Set Difference";
    cout<<"\n6. Symmetric Difference";
    cout<<"\n7. Cartesian Product";
    cout<<"\n0. Exit\n";

    int t;
    cout<<"\nEnter a number to perform operation : \n";
    cin>>t;

    vector <int> arr;
    
    switch (t)
    {
    case 0:
        return;

    case 1:
        if(isSubset(A.set,B.set) == 1){
            
            cout<<"\nB is subset of A"<<endl;
        }
        else{
            cout<<"\nB is not subset of A"<<endl;
        }

        break;

    case 2:
        arr = (unionSet(A.set,B.set));
        cout << "\nUnion Set of Set A and Set B : ";
        for (auto element : arr)
        {
            cout << element << " ";
        }
        cout << endl;
        break;

    case 3:
        arr = (intersectionSet(A.set, B.set));
        cout << "\nInersection Set of Set A and Set B : ";
        for (auto element : arr)
        {
            cout << element << " ";
        }
        cout << endl;
        break;
    
    case 4:
        if (isSubset(A.set, B.set) == 1)
        {
            arr = (complement(A.set, B.set));
            cout << "\nComplement Set of Set B : ";
            for (auto element : arr)
            {
                cout << element << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "\nB is not subset of A , therefore its complement cannot be determined." << endl;
        }
        break;
    
    case 5:
        arr = (SetDiff(A.set, B.set));
        cout << "\nSet Difference of Set B from Set A : ";
        for (auto element : arr)
        {
            cout << element << " ";
        }
        cout << endl;
        
        break;
    
    case 6:
        arr = (SymmDiff(A.set, B.set));
        cout << "\nSymmetric Diff of Set A and Set B : ";
        for (auto element : arr)
        {
            cout << element << " ";
        }
        cout << endl;
        
        break;

    default:
        cout<<"\nInvalid Input"<<endl;
        break;
    }

    return menu(A,B);
}


int main(){

    int n,m;
    cout<<"\nEnter no of elements of set A : ";
    cin>>n;
    SET A(n);
    
    cout<<"\nEnter no of elements of set B : ";
    cin>>m;
    SET B(m);

    menu(A,B);

    return 0;

}