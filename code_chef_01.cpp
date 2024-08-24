#include<bits/stdc++.h>
using namespace std;
bool check(string str){
    int n=str.size();
    for(int i=0; i<n/2; i++){
        if(str[i]!=str[(n/2+i)]){
            cout<<str[i]<<" "<<str[(n/2+i)]<<endl;
            return false;
        }
        //cout<<str[i]<<" "<<str[(n/2-1)]<<endl;
    }
    return true;
}
int main(){
    
    string str;
    cin>>str;
    cout<<"Ans: "<<check(str);
}
