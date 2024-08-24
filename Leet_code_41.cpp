#include<bits/stdc++.h>
using namespace std;
string removeDuplicates(string s) {
    stack<char> st;
    int n=s.size();
    for(int i=0; i<n;i++){
        if(st.empty()){
            st.push(s[i]);
            cout<<"e: " <<s[i]<<endl;
            continue;
        }
        if(st.top()==s[i]){
            cout <<st.top()<<" "<<s[i]<<endl;
            st.pop();
        }else{
            cout<<"s: " <<s[i]<<endl;
            st.push(s[i]);
        }
    }
    string str;
    while(!st.empty()){
        str=st.top()+str;
        st.pop();
    }

    return str;

}
int main(){
    string s="abbacaxxx";
    cout <<"ans: "<< removeDuplicates(s)<<endl;

}