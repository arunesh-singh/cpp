#include <iostream>
using namespace std;

class Node{
    public:
    int Data;
    Node* Next;

    void print(Node* head){
        Node* cur=head;
        for(cur=head; cur!=NULL ; cur=cur->Next){
            cout<<cur->Data<<endl;
        }
    }

};
Node *insertFront(Node* head,int data){
    Node* temp=new Node();
    temp->Data=data;
    temp->Next=NULL;
    
    if(head==NULL){
        head=temp;
        head->Next=NULL;
    }
    else{
        temp->Next=head;
        head=temp;
    }
    return head;
}
int main(){
    Node* head=new Node();
    Node* second=new Node();
    Node* third=new Node();

    head->Data=1;
    head->Next=second;

    second->Data=2;
    second->Next=third;

    third->Data=3;
    third->Next=NULL;

    //head->insertFront(head,0);
    insertFront(head,0);
    head->print(head);

}