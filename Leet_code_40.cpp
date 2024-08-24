#include<bits/stdc++.h>
using namespace std;
char change(char ch){
    if(ch>='A' && ch<='Z'){
        return ch-'A'+'a';
    }
    return ch;
}
bool check(char ch){
    if(ch>='A' && ch<='Z'){
    return 1;
    }
    return 0;
}
string makeGood(string s) {
    bool c=false;
    int n=s.size();
    s.push_back(' ');
    string str="";
    for(int i=0;i<n; i++){
        if(check(s[i]) || check(s[i+1])){
            if(change(s[i]!=change(s[i+1]))){
                str.push_back(s[i]);
            }else{
                c=true;
                i++;
        }
        }else{
            str.push_back(s[i]);
        } 
    }

    if(c){
        return makeGood(str);
    }else{
        return str;
    }
    //return str;

}

string makeGood1(string s){
    stack<char> st;
    for(int i=0; i<s.size(); i++){
        if(st.empty()){
            st.push(s[i]);
            continue;
        }
        if(abs(st.top()-s[i]==32)){
            st.pop();
        }
        else{
            st.push(s[i]);
        }
    }
    string ans;
    while(!st.empty()){
        ans=st.top()+ans;
        st.pop();
    }
    return ans;
}
using namespace std;
int main(){
    string s="kkdsFuqUfSDKK";
    cout<<"Ans: " <<makeGood1(s);

}