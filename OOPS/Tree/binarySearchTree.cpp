#include <iostream>
#include <queue>
using namespace std;

class Node{
    public:
    int key;
    Node* left, *right;

    Node(int data){
        key = data;
        left = right = NULL;
    }
};

Node* newNode(int item){
    Node* temp = new Node(item);
    return temp;
}

void preOrder(Node* root){

    if(root){
        cout<<root->key<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

void inOrder(Node* root){

    if(root){
        inOrder(root->left);
        cout<<root->key<<" ";
        inOrder(root->right);
    }
}

void postOrder(Node* root){

    if(root){
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->key<<" ";
    }
}


Node* insertNode(Node* node , int key){
    if(node == NULL) return newNode(key);

    if( key < node->key )
        node->left = insertNode(node->left,key);
    else
        node->right = insertNode(node->right,key);

    return node;
}

Node* minValueNode(Node* node){
    Node* cur = node;
    
    while( cur && cur->left != NULL )
        cur = cur->left;

    return cur;
}

Node* deleteNode(Node* root,int key){
    if(root == NULL) return root;

    if(key< root->key)
        root->left = deleteNode(root->left,key);
    else if( key > root->key )
        root->right = deleteNode(root->right,key);
    else{

        if( root->left == NULL ){
            Node* temp = root->right;
            delete root;
            return temp;
        }else if( root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }

        Node * temp = minValueNode(root->right);

        root->key = temp->key;
        root->right = deleteNode(root->right,temp->key);
    }
    return root;
}


Node* search(Node* root,int key){
    if(!root) return root;

    if( key == root->key){
        return root;
    }
    if( key < root->key)
        return search(root->left,x,y);
    
    return search(root->right,x,y);
}

void levelOrder(Node* root){

    if(!root) return;

    queue<Node*> q;
    q.push(root);

    while(q.empty() == false){
        Node * node = q.front();
        cout<< node->data << " ";
        q.pop();

        if( node->left != NULL)
            q.push(node->left);
        if(node->right != NULL)
            q.push(node->right);
    }
}

int height(Node* node){
    if( node == NULL ) return 0;

    int lDepth = height(node->left);
    int rDepth = height(node->right);

    if(lDepth > rDepth) 
        return (lDepth + 1);
    else 
        return (rDepth+1);
}

int main(){
    Node* root = NULL;
    root = insertNode(root,8);
    insertNode(root,3);
    insertNode(root,1);
    insertNode(root,6);
    insertNode(root,7);
    insertNode(root,10);
    insertNode(root,14);
    insertNode(root,4);

    cout<<"InOrder Traversal : ";
    inOrder(root);

    cout<<"\nAfter deleting 10\n";
    root = deleteNode(root,10);

    cout<<"InOrder Traversal : ";
    inOrder(root);

    cout<<"\nAfter updating 4 with 9 : \n";
    root = search(root,4,9);
    cout<<"InOrder Traversal : ";
    inOrder(root);
}

