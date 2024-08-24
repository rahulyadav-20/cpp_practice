#include<bits/stdc++.h>
using namespace std;

int max_sub_array_01(vector <int> nums){
    int n=nums.size();
    int sum=0;
    int maxi=INT_MIN;
    for(int i=0; i<n; i++){
        sum=0;
        for(int j=i; j<n; j++){
            sum+=nums[j];
            maxi=max(maxi,sum);
           
        }
        
    }
    return maxi;

}

int max_sub_array_02(vector<int> nums){
    int n=nums.size();
    int sum=0;
    int maxi=INT_MIN;
    for(auto i:nums){
        sum+=i;
        maxi=max(maxi,sum);
        if(sum<0)sum=0;
    }
    return maxi;
}



int main(){
    vector<int> nums={-2,1,-3,4,-1,2,1,-5,4};
    cout <<max_sub_array_02(nums);
}