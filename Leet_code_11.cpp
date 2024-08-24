#include<bits/stdc++.h>
using namespace std;
bool check(char ch){
    if(ch>='a' && ch<='z')return true;
    if(ch>='A' && ch<='Z')return true;
    if(ch>='0' && ch<='9')return true;
    return false;
}

char change(char ch){

    if(ch>='a' && ch<='z')return ch;
    if(ch>='A' && ch<='Z'){
        ch='a'+(ch-'A');
        return ch;
    }
    return ch;

}

void is_palindrom(string s){
    string str="";
    int n=s.size();
    for(int i=0; i<n; i++){
        if(check(s[i])){
            str.push_back(change(s[i]));
        }

    }
    cout <<str<<endl;
    int s1=0;
    int e=str.size()-1;
    
    while(s1<=e){
        if(str[s1++]!=str[e--]){
            cout <<false;
            break;
        }
    }
    cout <<"panlindeom: "<<true;
}



int main(){
string s="0p";
is_palindrom(s);

}
