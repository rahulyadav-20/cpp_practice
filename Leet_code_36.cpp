//worng ans

#include<bits/stdc++.h>
using namespace std;
void constract(string s1,string s2){
    int n1=s1.size();
    int n2=s2.size();
    bool check=true;
    for(int i=0; i<n2; i++){
        if(s2[i]==s1[0]){
            for(int j=0; j<n1; j++){
                if(s2[i+j]!=s1[j]){
                    check=false;
                    break;
                }
            }
            if(check){
                cout<<"Ans:"<<true;
                exit(0);
            }
        }
    }
    cout<<"Ans:" <<false;
}
int main(){
    string s1="aab";
    string s2="baa";
    constract(s1,s2);
}