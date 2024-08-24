#include<bits/stdc++.h>
using namespace std;
bool containsNearbyDuplicate(vector<int>& nums, int k) {
    unordered_map<int,int> m;
    int n=nums.size();
    for(int i=0; i<n; i++){
        if(m.count(nums[i])>0 && abs(m[nums[i]]-i)<=k)return true;
        else m[nums[i]]=i;
        

    }
    return false;
}
int main(){
    vector<int> nums={1,2,3,1};
    int k=2;
    cout<<"Ans: " <<  containsNearbyDuplicate(nums,k);

}
