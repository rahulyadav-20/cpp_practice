#include<iostream>
using namespace std;
bool Isprime(int a){
    if(a==1)
    return false;
    for (int i=2; i*i<=a; i++){
        if(a%i==0){
            return false;
        }
    }
    return true;

}
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    cout<<Isprime(n)<<endl;
}
