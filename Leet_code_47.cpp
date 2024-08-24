#include<bits/stdc++.h>
using namespace std;
string decodeString(string& s,int& i) {
    string result;
    while(i<s.size() && s[i]!=']'){
        if(isdigit(s[i])){
            int k=0;
            while(i<s.size() && isdigit(s[i])){
                k=k*10+ s[i++]-'0';
            }
            i++;
            string r=decodeString(s,i);
            while(k-- >0){
                result+=r;
                
            }
            i++;
        }else{
            result+=s[i++];
        }
    }
    return result;
    


}
int main(){
    string s="3[abc]2[ca]ef5[b]";
    int i=0;
    cout <<"ans:  "<<decodeString(s,i);

}