#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int rev=0;
    int number=n;

    while(n>0){
        int lastD=n%10;
        rev =rev*10+lastD;
        n=n/10;
        cout<<lastD<<endl;

    }
    cout<<rev<<endl;
    if (number==rev){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}
