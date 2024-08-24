#include<iostream>
#include<math.h>
using namespace std;
/*
int fact(int n){
    if (n==0)
        return 1;
    return n*fact(n-1);
}
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    int N=fact(n);
    int count=0;
    while(N!=0){
        int lastD=N%10;
        if (lastD==0){
            count++;
        }else{
            break;
        }
        N=N/10;
        
    }
    cout<<count<<endl;
    return 0;

}*/
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int count=0;
    for(int i=5; i<=n; i=i*5){
        count=count +n/i;
    }
    cout<<count<<endl;
    return 0;

}