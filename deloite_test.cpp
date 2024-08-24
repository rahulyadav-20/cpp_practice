#include<bits/stdc++.h>
using namespace std;
void solve(string str,int n){
    int arr[26]={0};
    for(int i=0; i<str.size(); i++){
        arr[str[i]-'a']++;
    }
    for(int i=0; i<26; i++){
        n-=arr[i];
        if(n<0){
            char ch=i+'a';
            cout<<ch<<endl;
            cout<<arr[i]<<endl;
            return ;
        }
    }
}
int main(){
    string str="ajfifdkjsabdevgdd";
    int n=;
    solve(str,n);
}