#include<bits/stdc++.h>
using namespace std;
void isIsomorphic(string s, string t) {
    unordered_map<char,char> m;
    unordered_map<char,char> m2;

    int n=s.size();
    for(int i=0; i<n; i++){
        m[s[i]]=t[i];
        m2[t[i]]=s[i];
    }
    for(int i=0; i<n; i++){
        if(m[s[i]]!=t[i] || m2[t[i]]!=s[i]){
            cout <<0;
            exit(0);
        }
    }
   /* for(auto i:m){
        cout <<i.first<<" "<<i.second<<endl;
    }*/
    
    cout<<1;

}
int main(){
    string s="abcd";
    string t="efgh";
    isIsomorphic(s,t);
}