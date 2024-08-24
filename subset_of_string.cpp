#include<bits/stdc++.h>
using namespace std;
void subset_of_string(string &str,string s,int index,vector<string>& result){
    //base case
    if(index==str.size()){
        if(s.empty())return ;
        result.push_back(s);
        return ;
    }

    //exclude part
    subset_of_string(str,s,index+1,result);

    s.push_back(str[index]);
    subset_of_string(str,s,index+1,result);

}
vector<string> subset(string &str){
    vector<string> result;
    string s;
    int index=0;
    subset_of_string(str,s,index,result);
    return result;
}
int main(){
    string str="abcde";
    vector<string> ans;
    ans=subset(str);
    for(auto str:ans){
        cout<<str<<endl;
    }


}