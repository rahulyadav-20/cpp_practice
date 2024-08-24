#include<iostream>
using namespace std;
int main(){
    int n,j,i;
    n=5;
    int count=1;
    i=n;
    while(i--){
        j=n+1;
        while(--j){
            cout<<count<<" ";
            count++;
        }
        cout <<endl;
    }
}