#include "bits/stdc++.h"
using namespace std;

#define M 100

class Stack{
    int top;
    int* arr[M];

    Stack(){
        top = -1;
    }

    bool isEmpty(){
        return top == -1;
    }

    bool isFull(){
        return top == M-1;
    }

    void Push(char s){
        if(top == M-1){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        arr[++top] = s;
    }

    void Pop(){
        if(top == -1){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        top--;
    }

    int matchSymbol(char a, char b){
        if( a == '[' && b == ']')
            return 1;
        else if( a == '{' && b == '}')
            return 1;
        else if(a == '(' && b == ')')
            return 1;
        return 0;
    }

    int checkExpression(char exp){
        int count;
        char temp;

    
    }

}

int main{


}