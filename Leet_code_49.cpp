#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>& nums,int index,vector<vector<int>> & result){
    //base case
    if(index==nums.size()){
        result.push_back(nums);
        return ;
    }
    for(int j=index; j<nums.size(); j++){
        swap(nums[index],nums[j]);
        solve(nums,index+1,result);
        swap(nums[index],nums[j]);

    }
}
vector<vector<int>> permitaion(vector<int> &nums){
    vector<vector<int>> result;
    vector<int> vec;
    int index=0;
    solve(nums,index,result);
    return result;

}
int main(){
    vector<int> nums={1,2,3,};
    vector<vector<int>> ans;
    ans=permitaion(nums);
    for(auto vec:ans){
        for(auto i:vec){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}