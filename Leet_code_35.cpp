#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string s, string t) {
    int arr[26]={0};
    int arr2[26]={0};
    int n=s.size(), m=t.size();
    for(int i=0; i<n; i++ ){
        arr[s[i]-'a']++;
    }
    for(int i=0; i<m; i++){
        arr2[t[i]-'a']++;
    }
    for(int i=0; i<26; i++){
        //cout <<arr[i]<<" "<<arr2[i]<<endl;
        if(arr[i]!=arr2[i])return false;
    }
    return true;
}
int main(){
    string s="anagramvv";
    string t="nagaramll";
    cout <<isAnagram(s,t);
}