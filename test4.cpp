#include<iostream>
using namespace std;
int sumOfsumDigit(int n){
    int sum=0;
    int digitsum=0;
    while(n>0){
        int lastD=n%10;
        sum=sum+lastD;
        digitsum=digitsum+sum;
        n=n/10;
    }
    return digitsum;
}

int main(){
    int input;
    cout<<"input:";
    cin>>input;
    cout<<sumOfsumDigit(input);
}