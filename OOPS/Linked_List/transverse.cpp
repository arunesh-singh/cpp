#include <iostream>
using namespace std;

class Node{
    public:
    int Val;
    Node* Next;

    void print(Node* head){
        Node* cur=head;
        while(cur!=NULL){
            cout<<cur->Val<<endl;
            cur= cur->Next;
        }
    }
    // Calculating size of the list
    void lenght(Node *head){
        Node* cur=head;
        int count=0;
        for(cur=head;cur!=NULL;cur=cur->Next){
            count++;
            cur=cur->Next;
        }
        cout<<count<<endl;
    }
};

int main(){
    Node* head=new Node();
    Node* second=new Node();
    Node* third=new Node();

    head->Val=1;
    head->Next=second;

    second->Val=2;
    second->Next=third;

    third->Val=3;
    third->Next=NULL;

    head->print(head);
    cout<<endl;
    head->lenght(head);
    return 0;
}