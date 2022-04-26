#include <iostream>
using namespace std;

bool Palindrome(string);
bool Palindrome(string str)
{
    int low=0;
    int high= str.length()-1;

    while(low<high)
        {
            if(str[low]!=str[high])
                return false;
            low++;
            high--;
        }
    return true;
}
int main()
{
    string a;
    cout<<"THIS PROGRAM CHECKS WHETHER THE ENTERED STRING IS PALINDROME OR NOT"<<endl;
    cout<<endl;
    cout<<"Enter a String :";
    cin>>a;
    if(Palindrome(a))
        cout<<"Entered string is a palindrome.";
    else
        cout<<"Entered string is not a palindrome.";
    return 0;
}