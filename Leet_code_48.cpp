//17. Letter Combinations of a Phone Number

#include<bits/stdc++.h>
using namespace std;
void solve(string& digits,string output,int index,vector<string>& result,string mapping[]){
    //base case
    if(index==digits.size()){
        result.push_back(output);
        return ;
    }

    //find mapping index
    int num=digits[index]-'0';
    string value=mapping[num];
    for(int i=0; i<value.size(); i++){
        output.push_back(value[i]);
        solve(digits,output,index+1,result,mapping);
        output.pop_back();
    }

}
vector<string> letterCombinations(string& digits) {
    vector<string> result;
    string output;
    int index=0;
    string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz",};
    solve(digits,output,index,result,mapping);
    return result;


}
int main(){
    string digits="23";
    vector<string> ans;
    ans=letterCombinations(digits);
    for(auto i:ans){
        cout<<i<<"  ";
    }
    cout<<endl;
}