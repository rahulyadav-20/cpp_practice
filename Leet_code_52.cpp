//Not full complete
//perfect square

#include<bits/stdc++.h>
using namespace std;
int numSquares(int n) {
   // int count=0;
    int copy=n;
    int num=sqrt(n);
    int ans=INT_MAX;
    for(int i=0; i<num; i++){
        int count=0;
        n=copy;
        while(n>=num && n>=0){
            n-=(num*num);
            if(n>=0)count++;
            if(n<(num*num) && n>0){
                num=sqrt(n);
            }
        }
        ans=min(count,ans);
        num=sqrt(copy)-i;

    }
    return ans;


}
int main(){
    int n=6;
    cout<<numSquares(n);
}