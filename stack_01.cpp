#include<iostream>
using namespace std;

class Stack{
    //properties
    public:
    int *arr;
    int top;
    int size;
    Stack(int size){
        this->size=size;
        arr=new int[size];
        this->top=-1;
    }

   
    //function
    void push(int element){
        if(top == size-1){
            cout<<"satck is Overflow"<<endl;
        }else{
            top++;
            arr[top]=element;
        }
    }

    void pop(){
        if(top==-1){
            cout<<"Stack is Underflow"<<endl;
            
        }else{
            top--;
        }
    }

    int peek(){
        if(top ==-1){
            cout<<"Stack is Empty!"<<endl;
            return -1;
        }
        return arr[top];
    }

    bool is_empty(){
        if(top==-1){
            return true;
        }else{
            return false;
        }
    }


};
int main(){

    Stack s1(2);
    s1.push(34);
    s1.push(24);
    s1.push(78);
    cout<<s1.peek()<<endl;
    s1.pop();
    cout<<s1.peek()<<endl;
   s1.pop();
    s1.pop();
   cout<<s1.peek()<<endl;
   cout<<s1.is_empty()<<endl;


}