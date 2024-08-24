#include<bits/stdc++.h>
using namespace std;


class twoStack{
    private:
    int *arr;
    int top1;
    int top2;
    int size;
    public:
    twoStack(int s){
        this-> size=s;
        this-> top1=-1;
        this-> top2=s;
        arr=new int[s];
    }
    void push1(int element){
        if((top2 -top1) >1){
            top1++;
            arr[top1]=element;
            cout<<"Push1 Done!"<<endl;
        }else{
            cout<<"Satck1 is Overflow!"<<endl;
        }

    }

    void push2(int element){
        if((top2 -top1)>1){
            top2--;
            arr[top2]=element;
            cout<<"Push2 Done!"<<endl;
        }else{
            cout<<"stack2 is Overflow!"<<endl;
        }

    }

    void pop1(){
        if(top1<0){
            cout<<"Stack1 is Underflow"<<endl;
        }else{
            top1--;
            cout<<"pop1 Done!"<<endl;
        }
    }


    void pop2(){
        if(top2>= size){
            cout<<"Stack2 is Underflow"<<endl;
        }else{
            top2++;
            cout<<"pop2 Done!"<<endl;
        }
    }


    int peek1(){
        if(top1>0 && top1<top2){
            return arr[top1];
        }else{
            cout<<"Stack1 is Empty!"<<endl;
            return -1;
        }
    }



    int peek2(){
        if(top2<size && top2>top1){
            return arr[top2];
        }else{
            cout<<"Stack2 is Empty!"<<endl;
            return -1;
        }
    }

    bool is_Empty1(){
        if(top1==-1){
            return true;
        }else{
            return false;
        }
    }

    bool is_Empty2(){
        if( top2 == size){
            return true;
        }else{
            return false;
        }
    }

   

};
int main(){
        twoStack s1(3);
        s1.push1(2);
        s1.push2(4);
        s1.push1(3);
        //s1.pop1();
        //s1.pop1();
        s1.pop1();
        s1.pop1();
        s1.push2(34);
        s1.pop2();
        //s1.pop2();
        //s1.pop2();
        cout<<s1.peek2()<<endl;
        cout<<s1.peek1()<<endl;
    }