#include<bits/stdc++.h>
using namespace std;
void LCP (vector<string> str){
    int n=str.size();
    string s=str[0];
    string a="";
    int m=s.size();
    for(int j=0; j<m; j++){
        bool check=0;
        for(int i=0; i<n; i++){
            if(s[j]!=str[i][j]){
                check=1;
                break;
            }
        }
        if(check==1){
            break;
        }else{
            a.push_back(s[j]);
        }
    }
    cout <<a;
}
int main(){
    vector<string> str={"dog","racecar","car"};
    LCP(str);
}