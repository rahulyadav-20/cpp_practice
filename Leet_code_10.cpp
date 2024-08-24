#include<bits/stdc++.h>
using namespace std;
bool check(char ch){
    if(ch>='A' && ch<='Z')return 1;
    if(ch>='a' && ch<='z')return 1;
    return 0;
    
}
void length_of_last_word(string s){
    int count=0;
    int n=s.size()-1;
    bool check1=0;
    while(n>=0){
        if(s[n]==' '){
            n--;
        }else{
            break;
        }
    }
    for(int i=n; i>=0; i--){
        if(s[i]==' '){
            break;
        }else{
            count++;
        }
    
    }
    cout <<"count:"<<count;

}
int main(){
    string s="v";
    length_of_last_word(s);
}