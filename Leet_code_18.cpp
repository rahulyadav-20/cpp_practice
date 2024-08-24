#include<bits/stdc++.h>
using namespace std;

void maxProfit(vector<int> & price){
    int p1=0;
    int p2=0;
    int n=price.size();
    int Max=0;
    while(p1<n && p2<n){
        if(price[p1]>price[p2]){
            p1++;
            
        }else{
            Max=max(Max,(price[p2]-price[p1]));
            p2++;
            cout << "Max:"<<Max<<endl;
        }
    }
}
int main(){
    vector<int> price={7,6,4,3,1};
    maxProfit(price);
}