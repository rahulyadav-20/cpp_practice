#include<bits/stdc++.h>
using namespace std;
void lengthOfLongestSubstring(string s){
    int n=s.size();
    int p1=0;
    int p2=0;
    int maxi=0;
   // unordered_map<char,int> m;
    vector<int> map(256,-1);
    while(p2<n){
        if(map[s[p2]] != -1){
            p1=max(map[s[p2]]+1,p1);
        }
        maxi=max(maxi,p2-p1+1);    
        map[s[p2]]=p2;
        p2++;
    }
    cout<<"max: " <<maxi<<endl;
}
int main(){
    string s="abba";
    lengthOfLongestSubstring(s);
}