/* Given an array of characters , give an algorithm for removing the duplicates. */

#include "bits/stdc++.h"
using namespace std;

/* Brute Force Approch */
int elem(int* A , size_t n , int e){
    for( int i=0 ; i<n ; ++i){
        if( A[i] == e)
            return 1;
    }
    return 0;
}
int removeDuplicates1(int *A , int n){
    int m = 0;
    for( int i=0 ; i<n ; ++i )
        if(!elem(A,m,A[i])){
            A[m++] = A[i];
        }
    return m;
}
/* Time Complexity : O(n**2) */
/* Space Complexity : O(1) */


/* We can use sorting to reduce complexity */
char *removeDupsSorted(char *str)
{
    int last = 1, cur = 1;

    while (*(str + cur))
    {
        if (*(str + cur) != *(str + cur - 1))
        {
            *(str + last) = *(str + cur);
            last++;
        }
        cur++;
    }

    *(str + last) = '\0';
 
    return str;
}
char* removeDups(char * str){
    int n = strlen(str);

    sort(str,str+n);
    return removeDupsSorted(str);
}


int main(){

    int n = 9;
    int A[] = {1,4,2,1,4,2,5,7,5};
    n = removeDuplicates1(A,n);
    
    for(int i=0 ; i<n ; i++ )
        cout<<A[i]<<" ";
    cout<<endl;

    char str[] = "Aruneshsingh";
    cout << removeDups(str);
}
