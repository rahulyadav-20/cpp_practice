// print prime number between two number
#include<iostream>
using namespace std;

bool isPrime(int num){  // isPrime is a function
    for (int i=2; i<num; i++){
        if (num%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int a,b;
    cin>>a>>b;
    for (int i=a; i<b; i++){ // itretion from a to b
        if (isPrime(i)){
            cout<<i<<endl;
        }
    }
    return 0;
} 