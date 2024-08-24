#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007;
long long int pow(int a,int b){
    if(b==0)return 1;
    if(b==1)return a;
    long long int ans=pow(a,b/2)%mod;
    if(b&1){
        return (a*ans*ans)%mod;
    }else{
        return (ans*ans)%mod;
    }
}
int main(){
    int a,b;
    cout<<"pow: ";
    cin>>a>>b;
    long long int ans=pow(a,b);
    cout <<ans<<endl;
}