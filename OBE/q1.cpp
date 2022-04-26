#include<iostream>
using namespace std;

class StringOps{
    private:
        string str;
        int size;
    public:
        StringOps (){  // defualt constructor
            str = "";
            size = 0;
        } 
        StringOps(string _str){  // parameterized constructor
            str = _str;
            size = _str.length();
        }

        void input(){
            cout << "neter your string : ";
            cin >> str;
            size = str.length();
        }
        StringOps operator + (const StringOps otherstring){
            string result_string = str + otherstring.str;
            return StringOps(result_string);
        }
        char operator [] (int index){
            if (index > size || index == 0){ // invalid indexing
                cout<<"invalid index";
                return '\0';
            }
            if (index < 0){
                return str[(size -1) + (index+1)]; //index = -1 ,size - 1 + (-1) + 1 = size -1 = last index
            }
            return str[index-1]; 
        }
        int findmatch(char set[], int length){
            int frequency = 0;
            for (int i = 0; i < size; i++ ){
                for (int j = 0; j < length; j++ ){
                    if (str[i] == set[j]){
                        frequency ++;
                    }
                }
            }
            return frequency;
        }
        void display(){
            cout<<"\nthe string is : "<<str<<endl<<"the length of the string is : "<<size<<endl;
        }
};

int main(){
    StringOps s1("hello"), s2("world"), s3;
    char c = s1[1];
    cout << c;
    s1.display();
    char arr[5] = {'a','r','f','e','l'};
    cout<<s1.findmatch(arr,5);
    s3 = s1 + s2;
    s3.display();
    return 0;
}