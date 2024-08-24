#include<bits/stdc++.h>
using namespace std;
void intersection(vector<int>& nums1, vector<int>& nums2) {
    int n1=nums1.size();
    int n2=nums2.size();
    unordered_map<int,int> s;
    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            if(nums1[i]==nums2[j])
                s[nums1[i]]++;
        }
    }
    for(auto i:s){
        cout <<i.first<<" ";
    }
}

int main(){
    vector<int> nums1={1,2,2,1};
    vector<int> nums2={1,2,2};
    intersection(nums1,nums2);

}
