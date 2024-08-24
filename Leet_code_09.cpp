#include<bits/stdc++.h>
using namespace std;
//vector<int> a;
void printL(vector<int> nums){
    for(int i=0; i<nums.size(); i++){
        cout<< nums[i] <<" ";
    }
}
vector<int> searchRang(vector<int>& arr ,int target){
    vector<int> a;
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;
    int i=-1;
    while(s<=e){
        if(arr[mid]==target){
            i=mid;
        }
        if(arr[mid]>target){
            e=mid-1;   
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         
        }else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    
    s=0;
    e=arr.size()-1;
    mid=s+(e-s)/2;
    int k=-1;
    while(s<=e){
        if(arr[mid]==target){
            k=mid;
        }
        if(arr[mid]<target){
            s=mid+1;
        }else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    a.push_back(k);
    a.push_back(i);

    return a;

}
int main(){
vector<int> arr={9,9,9,9,9,9,9,9,9,9,9,9,9,9,9};
printL(searchRang(arr,9));
}