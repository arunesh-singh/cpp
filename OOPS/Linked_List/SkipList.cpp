#include <iostream>
using namespace std;

#define MAXSKIPLEVEL 5;

class Node{
    int data;
    Node* next[1];
};

class SkipL{
    Node* header;
    int listLevel;
};

Node list;

void insertElement(int data){
    int i, newLevel;
    Node* update[MAXSKIPLEVEL+1];
    Node*temp = list.header; 
    
}

int main(){


}