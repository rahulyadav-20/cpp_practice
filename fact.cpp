#include<iostream>
using namespace std;
int fact(int n){
    if(n==0){
        return 1;
    }
    int N=n*fact(n-1);
    return N;
}
int main(){

    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<fact(n)<<endl;
    return 0;
}