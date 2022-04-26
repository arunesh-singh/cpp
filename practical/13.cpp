#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

void strAdd(string str){
    for(int i=0; i<str.length();i++){
        cout<<&str[i]<<endl;
    }
    cout << "**************" << endl;
}

void Concat(string a[],string b[]){
    string str[len(a)+len[b]+1];
    for(int i=0;i<len(a);i++){
        str[i]=a[i];
        str[i+len(a)]=b[i];
    }
    cout<<"\n Addition of 2 strings : "<<str<<endl;
}

void concatWithStrCat(char a[],char b[]){
    char t[len(a)+len(b)+1];
    strcpy(t,a);
    strcat(t,b);
    cout<<"Concatenated string using strcat() is :"<<t<<endl;
}


void compare(string str){
    string str2;
    cout<<"Enter another string : ";
    if(!str.compare(str2))
        cout<<"Strings are equal"<<endl;
}

void str_len(string str){
    int count=0;
    char *text=str;
    while(*(text++) != '\0') count++;
    cout<<"Length of "<<str<<" is "<<count;
}

void lcase(string str){
    transform(str.begin(),str.end(), str.begin(), :: tolower);
    cout<<"\nLOVERCASE - "<<str<<endl;
}

void ucase(string str){
    transform(str.begin(),str.end(), str.begin(), :: toupper);
    cout<<"\nUPERCASE - "<<str<<endl;
}

void str_vovel(string str){
    int vowels = 0;
    for(int i = 0; str[i]; i++)  {
        if(str[i]=='a'|| str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'
        ||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O' ||str[i]=='U'){
		    vowels++;
        }
    }
    cout << "\nTotal Vowels : " << vowels;
}

void reverse(string str){
    reverse(str.begin(), str.end());
    cout<<"\nReverse of the string : "<<str<<endl;
}

void menu(string str[]){
    cout<<"\n\t\t MENU ";
    cout<<"\n 1. Show address of each character in string \n 2. Concatenate two strings without using strcat function. \n 3. Concatenate two strings using strcat function.  \n";
    cout<<" 4. Compare two strings  \n 5. Calculate length of the string (use pointers)  \n 6. Convert all lowercase characters to uppercase \n 7. Convert all uppercase characters to lowercase   \n";
    cout<<" 8. Calculate number of vowels \n 9. Reverse the string \n 0. Exit   \n";
    cout<<"\n\n Enter your choice :";
    int choice;
    cin>>choice;
    switch(choice)
    {
        case 1:
            strAdd(str);
            break;
        case 2:
            Concat(str);
            break;
        case 3:
            concatWithStrCat();
            break;
        case 4:
            compare(str);
            break;
        case 5:
            str_len(str);
            break;
        case 6:
            lcase(str);
            break;
        case 7:
            ucase(str);
            break;
        case 8:
            str_vovel(str);
            break;
        case 9:
            reverse(str);
            break;
        case 0:
            return;
        default:
            cout<<"Invalid choice";
    }
    return menu(str);
}

int main(){
    string str[];
    cout<<"\nThis program is used to perform actions on string through menu driven program \n\n";
    cout<<"Enter the string : ";
    cin>>str;
    menu(str);
}