// write a program to find the binary coefficient
#include<iostream>
using namespace std;

long long int fact(int n){
    int factorial=1;
    for (int i=1; i<=n; i++){
        
        factorial=factorial*i;
    }
    return factorial;
}

int main(){
    int n,r;
    cout<<"n= ";
    cin>>n;
    cout<<"r= ";
    cin>>r;
    long long int num=1;
    for(int i=n; i>n-r; i--){
        num=num*i;
    }
    long long int ans=(num/fact(r));
    cout<<"ans= "<<ans<<endl;
    return 0;
}