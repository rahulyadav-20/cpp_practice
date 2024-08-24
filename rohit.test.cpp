#include<bits/stdc++.h>
using namespace std;
int dis(int x){

    if(x==0 || x==2){
        return 1;
    }
    return (dis(--x)* (x--));
}
int main(){
    cout<<dis(3);
}