#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node *next; 
};

void print_Linked_List(Node *n){
    while(n!=NULL){
        
        cout <<n->data<<"  ";
        
        n=n->next;
    }
}
void insert_at_last(Node *n,int key){
    Node *node=new Node();
    node->data=key;
    node->next=NULL;

    while(n->next!=NULL){
        n=n->next;
    }
    n->next=node;

}


int main(){
    Node * head=NULL;
    Node * second=NULL;
    Node * third=NULL;
    Node * fourth=NULL;

    head =new Node();
    second =new Node();
    third =new Node();
    fourth =new Node();

    head->data=1;
    head->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=fourth;

    fourth->data=4;
    fourth->next=NULL;
    insert_at_last(head,5);
    insert_at_last(head,98);
    print_Linked_List(head);

}