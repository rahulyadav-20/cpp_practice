// print the maximun of number
#include<iostream>
using namespace std;

int main(){

    int a,b,c;
    cin>>a>>b>>c;

    if(a>b){
        if(a>c){
            cout<<"Max is a";
        }else {
            cout<<"Max is c";
        }
    }else if (b>c){
        cout<<"Max is b";
    }else{
        cout<<"Max is c";
    }

    return 0;
}