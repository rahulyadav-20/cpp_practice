#include<bits/stdc++.h>
using namespace std;
int  revers(int x){
    if(x/10==0){
        return x;
    }
    long long int ans=0;
    while(x){
        ans=(ans*10) +x%10;
        x=x/10;
    }
    return (ans<INT_MIN || ans>INT_MAX )?0:ans;

    
   

    
}
int main(){
    int n=1534236469;
    cout <<"ans:"<<revers(-776);
}