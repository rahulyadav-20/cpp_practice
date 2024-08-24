#include<bits/stdc++.h>
using namespace std;
void subsets_rec(vector<int> &nums, int idx, vector<vector<int>> & result){
    if(idx==0){
        result.push_back({});
        result.push_back({nums[idx]}); 
    }else{
        subsets_rec(nums,idx-1,result);
        int n=result.size();
        for(int i=0; i<n; i++){
            vector<int> r=result[i];
            r.push_back(nums[idx]);
            result.push_back(r);

        }
    }
}
vector<vector<int>> subsets(vector<int>& nums) {
    if(nums.empty())return {{}};
    vector<vector<int>> result;
    subsets_rec(nums,nums.size()-1,result);
    for(int i=0; i<result.size(); i++){
        for(int j=0; j<result[i].size(); j++){
            cout <<result[i][j]<<" ";
        }
        cout <<endl;
    }

    return result;

}
void subsets_iterator(vector<int> nums){
    int n=nums.size();
    vector<vector<int>> result;
    result.push_back({});
    result.push_back({nums[0]});
    for(int i=1; i<n; i++){
        int m=result.size();
        for(int j=0; j<m; j++){
            vector<int> r=result[j];
            r.push_back(nums[i]);
            result.push_back(r);
        }
    }
    for(int i=0; i<result.size(); i++){
        for(int j=0; j<result[i].size(); j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    vector<int> nums={1,2,3};
    subsets(nums);
    subsets_iterator(nums);

}