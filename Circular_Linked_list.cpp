#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data=d;
        this->next=NULL;
    }
};
void print(Node * tail);

void insertNode(Node * & tail,int element,int data){
    if(tail==NULL){
        Node *new_node=new Node(data);
        tail=new_node;
        new_node->next=new_node;
    }else{

        Node *temp=tail;
        while(temp->data !=element && temp->next!=tail){
            temp=temp->next;
        }
        Node * new_node=new Node(data);
        new_node->next=temp->next;
        temp->next=new_node;
    }
}

void deleteNode(Node *&tail,int data){
    if(tail == NULL){
        cout<<"List is empty"<<endl;
        return;
    }else{
        Node *prev=tail;
        Node *curr=prev->next;

        if(curr == prev){
            tail =NULL;
        }
        while(curr -> data != data){

            prev=curr;
            curr -> next =NULL;

        }
        prev -> next = curr -> next;

        if(curr == prev){
            tail = NULL;
        }else if(tail == curr){
            tail =prev;
        }

        curr -> next= NULL;
        delete curr;

    }


}

void print(Node * tail){
    Node *temp=tail;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp != tail);
    cout<<endl;
}

bool is_Circular_Linked_List(Node *tail){
    if(tail == NULL){
        return true;
    }
    if(tail -> next == tail){
        return true;
    }
    Node *temp=tail;
    temp = temp -> next;
    while( temp != NULL && temp  != tail){
        temp = temp -> next;
    }
    if(temp == tail){
        return true;
    }else{
        return false;
    }
}
int main(){
    Node *tail=NULL;
    insertNode(tail,9,12);
    insertNode(tail,12,34);
    insertNode(tail,34,67);
    insertNode(tail,12,10);
    insertNode(tail,67,98);
    insertNode(tail,89,90);
    insertNode(tail,65,100);
    insertNode(tail,67,29);
    print(tail);

    if(is_Circular_Linked_List(tail)){
        cout << "Linked List is Circular" << endl;
    }else{
        cout << "Linked List is not Circular" << endl;
    }
    cout << "tail: " << tail -> data << endl;

}