#include<bits/stdc++.h>
using namespace std;
bool is_sort(vector<int>& arr, int n){
    //base case
    if(n==0)return true;
    //processing
    if(arr[n-1]>arr[n])return false;
    //recursive tail
    return is_sort(arr,n-1);
}
int arr_sum(vector<int> &arr ,int n){
    if(n==0)return 0;
    if(n==1)return arr[0];
    return arr[n-1]+arr_sum(arr,n-1);
} 
bool Linear_serach(vector<int> & arr,int n,int& target){
    if(n==0)return false;
    if(arr[n-1]==target)return true;
    return Linear_serach(arr,n-1,target);
}
int binary_Search(vector<int>& arr,int s,int e, int target){
    //base case

    if(s>e)return -1;
    int mid=s+(e-s)/2;
    //cout<<mid<<endl;
    if(arr[mid]==target){
        return mid;
    }
    if(target>arr[mid]){
       return binary_Search(arr,mid+1,e,target);
    }else{
        return binary_Search(arr,s,mid-1,target);
    }
}

int main(){
    vector<int> arr={1,2,3,4,5,6,7,8,9,45,47,85,400,500,800};
    int n=arr.size();
    bool ans=is_sort(arr,n-1);
    int sum=arr_sum(arr,n);
    cout<<"array sum: " <<sum<<endl;
    if(ans){
        cout<<"Array is sorted "<<endl;
    }else{
        cout<<"Array is not sorted"<<endl;
    }
    int target=5;
    bool annss=Linear_serach(arr,n,target);
    if(annss){
        cout<<"Element find"<<endl;

    }
    else{
    cout<<"Element not find"<<endl;
    }

    cout<<"Mid: "<<binary_Search(arr,0,n-1,100)<<endl;
}