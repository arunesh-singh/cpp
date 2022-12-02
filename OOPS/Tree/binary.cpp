#include <iostream>
using namespace std;

class BinaryNode{

    int data;
    BinaryNode* left;
    BinaryNode* right;
};

void preOrder(BinaryNode* root){

    if(root){
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

void inOrder(BinaryNode* root){

    if(root){
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }
}

void postOrder(BinaryNode* root){

    if(root){
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->data<<" ";
    }
}

void levelOrder(BinaryNode* root){

    
}

int main(){

    return 0;
}