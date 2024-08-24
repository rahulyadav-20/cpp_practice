#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node *prev;

    Node(int d){
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
    }
    ~Node(){
        int val=this->data;
        if(this->next != NULL){
            this->next=NULL;
        }
        if(this->prev !=NULL){
            this->prev=NULL;
        }
        cout<<"free Memory"<<val<<endl;
    }

};
int getLength(Node *&head);
void print(Node *&head);




void insert_at_head(Node*& head,int data){
    if(head==NULL){
        Node *New_Node=new Node(data);
        head=New_Node;
    }else{

    Node *temp=new Node(data);
    head->prev=temp;
    temp->next=head;
    head=temp;
    }

}



void insert_at_last(Node *& head,int data){
    if(head==NULL){
        Node* New_Node=new Node(data);
        head=New_Node;
    }else{
        Node *New_node=new Node(data);
        Node *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=New_node;
        New_node->prev=temp;
    }
}


void insert_at_position(Node *& head,int position,int data){
    Node *temp=head;
    Node *temp_prev=NULL;
    Node* New_node=new Node(data);
    if(position==1){
        insert_at_head(head,data);
        return ;
    }
    int length=getLength(head);
    if(length==position){
        insert_at_last(head,data);
        return ;
    }

    int len =0;
    while(len<position-1){
        temp_prev=temp;
        temp=temp->next;
        len++;
    }
    New_node->next=temp;
    New_node->prev=temp_prev;
    temp_prev->next=New_node;
    temp->prev=New_node;


}



void print(Node *&head){
    Node *temp=head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


int getLength(Node *&head){
    int len=0;
    Node *temp=head;
    while(temp !=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

void deleteNode(Node *&head,int position){
    if(position==1){
        Node *temp=head;
        head=head->next;
        delete temp;
        return ;
    }
    int len=1;
    Node *temp=head;
    while(len<position){
        temp=temp->next;
        len++;
    }
    if(temp->next==NULL){
        temp->prev->next=NULL;
        temp->prev=NULL;
        delete temp;
        return ;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    temp->next=NULL;
    temp->prev=NULL;
    delete temp;
    
}

int main(){
    /*Node *node=new Node(10);
    Node *head=node;
    insert_at_head(head,45);
    insert_at_head(head,78);
    insert_at_head(head,23);
    insert_at_last(head,67);
    insert_at_last(head,90);
    insert_at_head(head,34);
    insert_at_position(head,3,80);
    insert_at_position(head,1,45);
    print(head);
    deleteNode(head,2);
    print(head);
    deleteNode(head,8);
    print(head);
    cout<<"size: "<<getLength(head)<<endl;
    cout<<"Head: "<<head->data<<endl;*/

    Node *head1=NULL;
    //insert_at_head(head1,10);
    for(int i=1; i<=10; i++){
        insert_at_last(head1,(10-i));
    }
    print(head1);
    cout<<"head1: "<<head1->data<<endl;
    
}