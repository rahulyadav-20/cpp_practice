#include<bits/stdc++.h>
using namespace std;
void subset_(vector<int>& nums, vector<int> output, int index, vector<vector<int>>& result){
    //base case   index is equal size of nums push back vector output in vector<vrctor<int>> result
    if(index==nums.size()){
        result.push_back(output);
        return ;
    }
    //exclude part
    subset_(nums,output,index+1,result);

    //include part
    int element=nums[index];
    output.push_back(element);
    subset_(nums,output,index+1,result);

}
vector<vector<int>> subset(vector<int> &nums){
    vector<vector<int>> result;
    vector<int> output;
    int index=0;
    subset_(nums,output,index,result);

    /*for(auto vec:result){
        for(auto i:vec){
            cout<<i<<" ";
        }
        cout<<endl;
    }*/
    return result;


    
}
int main(){
    vector<int> nums={1,2,3,4};
    vector<vector<int>> ans;

    ans=subset(nums);
    for(auto vec:ans){
        for(auto i:vec){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
