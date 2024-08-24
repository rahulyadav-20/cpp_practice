#include<bits/stdc++.h>
using namespace std;
bool Duplicate_01(vector<int>& nums){
    for(int i=0; i<nums.size()-2; i++){
        for(int j=i+1; j<nums.size()-1; j++){
            if(nums[i]==nums[j]){
                return true;
            }
        }
    }
    return false;
}
bool Duplicate_2(vector<int>& nums ){
    sort(nums.begin(),nums.end());
    for(int i=0; i<nums.size(); i++){
        if(nums[i]==nums[i+1]) return true;
    }
    return false;
}
int main(){
    vector<int> nums={1,2,3,8};
    cout <<Duplicate_2(nums);
}