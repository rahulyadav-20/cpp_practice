#include<iostream>
using namespace std;
int main(){
    int pp,qq,rr;
    pp=9,qq=6,rr=5;
    for(rr=4; rr<=5; rr++){
        qq=8&pp;
        pp=(1+2)^rr;

    }
    pp=pp&rr;
    for(rr=2; rr<=3; rr++){
        qq=(pp+11)^qq;

    }
    cout <<pp+qq;
}