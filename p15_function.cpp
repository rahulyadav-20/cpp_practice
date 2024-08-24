// print fibonacci sequence
#include<iostream>
using namespace std;

void fib(int n){
    int a=0;  // inital value of a=0
    int b=1;   //inital value of b=1
    int nextno;
    for (int i=0; i<n; i++){
        cout<<a<<endl;
        nextno=a+b; //store a+b in next no
        a=b;  //store the value of b in a
        b=nextno; //store the value od next no in b

    }
    return;

}

int main(){
    int n;
    cin>>n;
    fib(n);  //call the function
    return 0;
}