#include<bits/stdc++.h>
using namespace std;
void closureSum(int num){
    string str=to_string(num);
    int sum=0;
    int s=0; 
    int e=str.size()-1;
    while(s<e){
        string arr="";
        arr.push_back(str[s]);
        arr.push_back(str[e]);
        int num=stoi(arr);
        sum+=num;
        s++;
        e--;
    }
    if(str.size()%2==0){
        cout<<sum;
    }else{
        int num=str[s]-'0';
        sum+=num;
        cout<<sum;
    }
    
}
int main(){
    int num=6583;
    closureSum(num);
}