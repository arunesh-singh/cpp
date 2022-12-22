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
    if(node == NULL){
        Node* temp = new Node(key);
        return temp;
    }

    if( key < node->key )
        node->left = insertNode(node->left,key);
    else
        node->right = insertNode(node->right,key);

    return node;
}

Node* maxValueNode(Node* node){
    if(!node) return NULL;
    
    while( node->right != NULL )
        node = node->right;

    return node;
}

Node* deleteNode(Node* root,int key){
    if(root == NULL) return root;

    if(key < root->key)
        root->left = deleteNode(root->left,key);
    else if( key > root->key )
        root->right = deleteNode(root->right,key);
    else{
        if( root->left == NULL ){
            Node* temp = root->right;
            delete root;
            return temp;
        }
        if( root->right == NULL ){
            Node* temp = root->left;
            delete root;
            return temp;
        }

        Node* temp = maxValueNode(root->left);
        root->key = temp->key;
        root->left = deleteNode(root->left,root->key);
    }
    return root;
}


Node* search(Node* root,int data){
    if(!root) return root;

    if( data == root->key){
        return root;
    }
    if( data < root->key)
        return search(root->left,data);
    
    return search(root->right,data);
}

void levelOrder(Node* root){

    if(!root) return;

    queue<Node*> q;
    q.push(root);

    while(q.empty() == false){
        Node * node = q.front();
        cout<< node->key << " ";
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
    root = insertNode(root,75);
    root = insertNode(root,70);
    root = insertNode(root,44);
    root = insertNode(root,98);
    root = insertNode(root,108);
    root = insertNode(root,91);
    root = insertNode(root,95);
    root = insertNode(root,45);
    root = insertNode(root,145);

    cout<<"InOrder Traversal : ";
    inOrder(root);

    cout<<"\nAfter deleting 98\n";
    root = deleteNode(root,98);

    cout<<"InOrder Traversal : ";
    inOrder(root);

    root = search(root,4);
    cout<<endl<<root->key<<endl;

}

