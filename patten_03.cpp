#include<iostream>
using namespace std;
int main(){
    int i,j,n=5;
    i=1;
    while(i<=n){
        j=1;
        int count=i;
        while(j<=i){
            cout << count <<" ";
            count --;
            j++;

        }
        cout << endl;
        i++;
    }
}