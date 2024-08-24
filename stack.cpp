#include<bits/stdc++.h>
using namespace std;
int arr[10]={};
int top=-1;
void print(int arr[]){
    if(top==-1){
        cout <<"No element";
        exit(0);
    }
    for(int i=0; i<top; i++){
        cout <<arr[i]<<" ";
    }
    cout <<endl;

}
 void push(int arr[], int n, int element){
    if(top==-1)top=0;
    if(top<n){
        arr[top]=element;
        top++;
    }else{
        cout << "Stack overflow";
    }

 }
void pop(int arr[], int n ){
    if(top==-1){
        cout <<"stack underflow";
        exit(0);
    }else{
        cout <<"pop from stack"<<arr[top]<<endl;
        top--;
    }
}

int main(){
    push(arr,10,11);
    push(arr,10,12);
    push(arr,10,13);
    print(arr);
    pop(arr,10);
    print(arr);
    
    

}
