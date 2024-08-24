//88. Merge Sorted Array

#include<bits/stdc++.h>
using namespace std;

void mergeArray(vector<int>& nums1, int m, vector <int> &nums2, int n){
    vector<int> arr;
    int s1=0,s2=0;
    while(s1<m && s2<n){
        if(nums1[s1]<=nums2[s2]){
            arr.push_back(nums1[s1++]);
        }else{
            arr.push_back(nums2[s2++]);
        }
    }
    while(s1<m){
        arr.push_back(nums1[s1++]);
    }
    while(s2<n){
        arr.push_back(nums2[s2++]);
    }
    for(int i=0; i<m+n; i++){
        nums1[i]=arr[i];
        cout<<nums1[i]<<"";
    }
    cout <<endl;
}
int main(){
    
    vector<int> nums1={1,6,8,9};
    vector <int> nums2={4,5,6};
    int m=4,n=3;
    mergeArray(nums1,m,nums2,n);
    for(int i=0; i<m+n; i++ ){
        cout <<nums1[i] <<" ";
    }
}