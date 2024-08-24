#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    Node(){

    }
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memoey free"<<value<<endl;
    }
};

void insertAtHead(Node* &head,int data){
    Node* temp=new Node(data);
    temp-> next=head;
    head=temp;
}

void insertAtTail(Node* &tail,int data){
    if(tail->next!=NULL){
        return ;
    }
    Node * temp=new Node(data);
    tail->next=temp;
    tail=temp;

}

void insert_at_position(Node* &head,Node* &tail,int position,int data){
    //insert at first position
    if(position==1){
        Node* temp=new Node(data);
        temp->next=head;
        head=temp;
        return ;
    }

    //finding the element
    int count=1;
    Node * insert_position=head;
    while(count<position-1){
        insert_position=insert_position->next;
        if(insert_position->next==NULL)break;
        count++;
    }
    
    //insert at last position
    if(insert_position-> next==NULL){
        Node* temp=new Node(data);
        insert_position->next=temp;
        tail=temp;
        return ;
    }

    //insert at position 
    Node *temp=new Node(data);
    //cout<<insert_position->next<<endl;
    temp -> next=insert_position -> next;
    insert_position -> next=temp;

}

void print(Node* & head){
    if(head == NULL){
        cout<<"Linled List is Empty"<<endl;
    }
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;

}

void deleteNode(Node *&head,int position){

    //deleting at first node
    if(position==1){
        Node *temp=head;
        head=head->next;
        temp->next-NULL;
        delete temp;
        return ;
    }

    int count=1;
    Node*prev=NULL;
    Node *temp=head;
    while(count<position){
        prev=temp;
        temp=temp->next;
        count++;

    }
    //delete at any position
    prev->next=temp->next;
    temp->next=NULL;
    delete temp;

}

void reverse(Node* &head){
    if(head==NULL || head->next==NULL){
        return ;
    }else{
        Node *prev=NULL;
        Node *current=head;
        Node *forword=NULL;
        while(current != NULL){
            forword=current->next;
            current->next=prev;
            prev=current;
            current=forword;

        }
        head=prev;

    }
}

Node * Median(Node * head){
    if(head==NULL || head -> next == NULL){
        return head;
    }
    if(head -> next -> next == NULL){
        return head -> next;
    }
    Node * fast=head -> next;
    Node *slow=head;

    cout <<"nii "<<endl;
    while(fast->next != NULL){
        fast = fast -> next;
        if(fast -> next != NULL){
            fast =fast -> next;
        }
        slow = slow -> next;
        

    }
    //  qcout << slow -> data <<endl ;
    return slow;


 }

void reverse_recursive(Node *& head,Node * curr,Node* prev){
    if(curr == NULL){
        head = prev;
        return;
    }
    reverse_recursive(head, curr->next, curr);
    curr->next = prev;


}

Node * reverse_recursive2(Node * head){
    //bass case
    if(head == NULL || head->next == NULL){
      return head;  
    }

    Node * Node1 = reverse_recursive2(head -> next);

    head -> next ->next= head;
    head ->next = NULL;

    return Node1;
}

Node * reverse_in_k_group(Node * head, int k){
    if(head == NULL){
        return head;
    }
    // step 1 reverse linked list in k group

    Node *forword=NULL;
    Node *curr=head;
    Node *prev=NULL;
    int count=0; 
    while(curr != NULL && count<k){
        forword=curr->next;
        curr ->next =prev;
        prev=curr;
        curr=forword;
        count++;
    }
    if(forword != NULL){
        head -> next= reverse_in_k_group(forword,k);
    }
    return prev;
}

bool is_Circular_Linked_List(Node * head){
    if( head == NULL){
        return true;
    }
    if(head ->next ==head){
        return true;
    }

    Node * temp = head -> next;
    while( temp != NULL && temp != head){
        temp = temp -> next;
    }

    if(temp == head){
        return true;
    }

    return false;

}
 
int main(){
    Node* node1=new Node(12);
    //cout<<node1->data<<" "<<endl;
    //cout<<node1->next<<" "<<endl;
    
    //creating head
    Node* head=node1;

    //creating tail
    Node* tail=node1;

    //insert at First Position
    insertAtHead(head,45);
    insertAtHead(head,98);
    insertAtHead(head,78);
    //print(head);
    insertAtTail(tail,90);
    insertAtTail(tail,70);
    insertAtTail(tail,89);
    //print(head);
    insert_at_position(head,tail,5,67);
    print(head);

    deleteNode(head,3);
    print(head);

    reverse(head);
    print(head);

    Node *median =Median(head);
    cout<<"Median: " << median -> data << endl; 
    reverse_recursive(head,head,NULL);
    print(head);
   // Node * noded1 =reverse_recursive2(head);
    //cout<<"reverse"<<endl;
    //print(noded1);

   // Node *rev=reverse_in_k_group(head,2);
    //print(rev);

    if(is_Circular_Linked_List(head)){
        cout << "Linked List is circular" << endl;
    }else{
        cout << "Linked List is not circular"<< endl;
    }
    

    cout << "Head: " << head -> data << endl;
    cout << "Tail: " << tail -> data << endl;



}