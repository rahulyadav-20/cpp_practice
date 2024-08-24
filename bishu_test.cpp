#include<bits/stdc++.h>
using namespace std;
int main(){
    string str="";
    getline(cin,str);
    unordered_map<char,int> mp;
    for(auto i:str)mp[i]++;
    int count=0;
    for(auto i:mp){
        if(i.second==2)count++;
    }
    cout <<count;
}