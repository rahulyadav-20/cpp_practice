#include<bits/stdc++.h>
using namespace std;
void sayCount(int num,string arr[]){
    if(num==0)return;
    int digit=num%10;
    num/=10;
    sayCount(num,arr);
    cout<<arr[digit]<<" ";


}
int main(){
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int num=456541248;
    sayCount(num,arr);

}