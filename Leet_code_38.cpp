#include<bits/stdc++.h>
using namespace std;
long long maximumSubarraySum(vector<int>& nums, int k) {
    int n=nums.size();
    unordered_set<int> set1;
    for(int i=0; i<n; i++)set1.insert(nums[i]);
    vector<int> arr;
    for(auto i:set1){
        arr.push_back(i);
    }
    sort(arr.begin(),arr.end());
    int num=arr.size();
    if(num<k)return 0;
    long long int sum=0;
    for(int i=num-1; i>=num-k; i--){
        cout <<arr[i]<<" ";
        sum+=arr[i];
    }
    return sum;


}
int main(){
    vector<int> nums={1,5,4,2,9,9,9};
    cout<<maximumSubarraySum(nums,3);

}