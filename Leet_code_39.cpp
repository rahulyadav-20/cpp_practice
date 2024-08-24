#include<bits/stdc++.h>
using namespace std;
long long maximumSubarraySum(vector<int>& nums, int k) {
    long long int sum=0, maxi=0;
    int n=nums.size();
    map<int,int> check;
    for(int i=0; i<k-1; i++){
        sum+=nums[i];
        check[nums[i]]++;
    }
    for(int i=k-1; i<n; i++){
        check[nums[i]]++;
        sum+=nums[i];
        if(check.size()==k){
            maxi=max(maxi,sum);
        }

        if(check[nums[i-k+1]]==1){
            check.erase(nums[i-k+1]);
        }else{
            check[nums[i-k+1]]--;
        }

        sum-=nums[i-k+1];
    }
    return maxi;
        
}
int main(){
    vector<int> nums={1,5,4,2,9,9,9};
    cout<< maximumSubarraySum(nums,3);
}