#include<iostream>
using namespace std;

int main(){

    int saving;
    cin>> saving;

    if (saving>5000){
        if (saving>10000){
            cout<<"Roadtrip with neha";
        }else{
            cout<<"shoping with Neha";
        }
        
    }else if (saving>2000){
        cout<<"Rashmi";
    }else{
        cout<<"Friend";
    }

    return 0;
}