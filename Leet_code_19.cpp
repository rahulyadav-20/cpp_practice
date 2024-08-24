#include<bits/stdc++.h>
using namespace std;
int PivetIndex(vector<int>  nums){
    int sum=0;
    int n=nums.size();
    for(int i=0; i<n; i++){
        sum+=nums[i];

    }
    int lsum=0;
    int rsum=sum;

    for(int i=0; i<n; i++){
        rsum=rsum-nums[i];
        if(lsum==rsum)return i;
        lsum=lsum+nums[i];
    
    }
    return -1;
}

int main(){
    vector<int> nums={-1,0,-1,-1,-1,-1,0,0};
    cout<<PivetIndex(nums);
}