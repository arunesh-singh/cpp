/* Given two binary strings a and b, return their sum as a binary string.

Example 1:

Input: a = "11", b = "1"
Output: "100"
Example 2:

Input: a = "1010", b = "1011"
Output: "10101" 
*/

#include <iostream>
using namespace std;

string addBinary(string a, string b){
    
    string ans = "";
    int temp = 0;
    int size_a = a.size() -1;
    int size_b = b.size() -1;

    while(size_a>=0 || size_b>=0 || temp == 1){
        temp += ((size_a >= 0)? a[size_a] - '0': 0);
        temp += ((size_b >= 0)? b[size_b] - '0': 0);
        ans = char(temp % 2 + '0') + ans;
        temp /= 2;
        size_a--; size_b--;
    }
    return ans;
}

int main(){

    string a = "11";
    string b = "1";

    cout<<addBinary(a,b)<<endl;
}