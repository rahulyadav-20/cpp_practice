#include<bits/stdc++.h>
using namespace std;

int is_Digit(char ch){
    if(ch>='0' && ch<='9'){
        return true;
    }
    return false;
}
int atio(string &str){
    int n=str.size();
    bool flag=false;
    long int result=0;
    for(int i=0; i<n; i++){
        if(str[i]=='-')flag=true;
        if(is_Digit(str[i])){
            result=(result*10+(str[i]-'0'))%INT_MAX;
        }
    }
    if(flag){
        result=result*-1;
        return result>INT_MIN?result:0;
    }else{
        return result<INT_MAX?result:0;
    }
    
}
int main(){
    string str="12374 with marsk";
    cout<<"Ans: "<<atio(str);

   /* string str="";
    getline(cin,str);
    int n=str.size();
    cout<<n;*/
}