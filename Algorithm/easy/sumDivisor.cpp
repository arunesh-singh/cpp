/* 
    Given a positive integer N., The task is to find the value of    
    \sum_{i=1}^{i=n} F(i)  where function F(i) for the number i be defined as the sum of all divisors of ‘i‘. 
*/

#include <iostream>
#include <math.h>
using namespace std;


bool isPrime(int n)
{
    // Check if n=1 or n=0
    if (n <= 1)
        return false;
    // Check if n=2 or n=3
    if (n == 2 || n == 3)
        return true;
    // Check whether n is divisible by 2 or 3
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    // Check from 5 to square root of n
    // Iterate i by (i+6)
    for (int i = 5; i <= sqrt(n); i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
 
    return true;
}

long long sumOfDivisors(int N)
{
    long long sum = 0;

    long long i,j;
    for( j = 1 ; j<=N ; j++){
        
        if( isPrime(j) ){
            sum += j;
            sum += 1;
        }
        else{

            for (int i=4; i<=sqrt(j); i++)
            {
                if (j%i == 0){

                    if (j/i == i)
                        sum+= i;
                    else {

                        sum+= i;
                        sum+= j/i;
                    }
                }

            }
        }
    
    }
    return sum;
}


int main(){

    int n;
    cin>>n;

    cout<<sumOfDivisors(n);

    return 0;
}