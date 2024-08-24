#include<bits/stdc++.h>
using namespace std;
 void threesum_01(vector<int> nums){
    vector<vector<int>> array;
    vector<int> arr;
    int n=nums.size();
    for(int i=0; i<n-2; i++){
        for(int j=i+1; j<n-1; j++){
            for(int k=j+1; k<n; k++){
                if(nums[i]+nums[j]+nums[k]==0){
                    arr.push_back(nums[i]);
                    arr.push_back(nums[j]);
                    arr.push_back(nums[k]);
                    array.push_back(arr);
                    arr.erase(arr.begin(),arr.end());
                }
            }
        }
    }
    int num=array.size();
    for(int i=0; i<num; i++){
        for(int j=0; j<3; j++){
            cout <<array[i][j]<<" ";
        }
        cout <<endl;
    }

 }






void threesum(vector<int> nums){
    sort(nums.begin(),nums.end());
    int n=nums.size();
    vector<vector<int>> array;
    for(int i=0; i<n; i++){
        if(i==0 || (i>0 && nums[i]!=nums[i-1])){
            int lo=i+1;
            int hi=n-1;
            int sum=0-nums[i];
            while(lo<hi){
                if(nums[lo]+nums[hi]==sum){
                    vector<int> arr;
                    arr.push_back(nums[i]);
                    arr.push_back(nums[lo]);
                    arr.push_back(nums[hi]);
                    array.push_back(arr); 

                    while(lo<hi && nums[lo] == nums[lo+1])lo++;
                    while(lo<hi && nums[hi] == nums[hi-1])hi--;
                    lo++,hi--;
                }
                else if((nums[lo]+nums[hi])<sum)lo++;
                else hi--;
            }
        }
    }
    int num=array.size();
    for(int i=0; i<num; i++){
        for(int j=0; j<3; j++){
            cout <<array[i][j]<<" ";
        }
            cout <<endl;
    }
        
}

int main(){
    vector<int> nums={-2,0,0,2,2};
    threesum(nums);
}