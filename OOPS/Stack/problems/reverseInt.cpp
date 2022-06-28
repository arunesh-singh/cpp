#include "bits/stdc++.h"
using namespace std;

void inseertAtBottom(stack<int> & st,int ele){
    
}

void reverse(stack<int> &st){

    if(st.empty()){
        return;
    }
    int ele = st.top();
    st.pop();
    reverse(st);
    insertAtBottom(st,ele);
}

int main{

    
}