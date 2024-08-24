#include<iostream>
using namespace std;
int main(){
    int pocketMoney;
    cin>>pocketMoney;
    for (int i=0;i<=30;i++){
        if (i%2==0){
            continue;
        }
        if (pocketMoney<=0){
            break;
        }
        cout<<"Date "<<i<<" Go out Today!"<<endl;
        pocketMoney=pocketMoney-200;
    }   

    return 0;
}