// Revers the number 
#include<iostream>
using namespace std;
int main (){
    int n; //store the number 
    cin>>n; //take a input from urse
    int reverse=0;
    while(n>0){
        int lastdigit= n%10;  //n =1234  n%10==4
        reverse=reverse*10 +lastdigit; // reverse multiply by 10 r=r*10 +l , r=4*10 +3=43
        n=n/10; // for next itretion

    }
    cout<<reverse;
    return 0;
}