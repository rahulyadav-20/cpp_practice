#include<iostream>
using namespace std;
int main(){
    int i,j,n=8;
    int count=1;
    i=1;
    while(i<=n){
        j=1;
        while(j<=i){
            cout << count <<" ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}