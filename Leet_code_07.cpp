//2220. Minimum Bit Flips to Convert Number
#include<bits/stdc++.h>
using namespace std;
int minBitFip(int start,int goal){
    int num=start xor goal;
    int count=0;
    while(num>0){
        if(num%2==1)count++;
        num=num/2;

    }
    return count;
}
int main(){
    int start=10;
    int goal=777;
    cout<<"bit change " <<minBitFip(start,goal);
}