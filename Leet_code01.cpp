#include<bits/stdc++.h>
using namespace std;
void searchInsert(int arr[],int n, int target){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]>=target){
            e=mid-1;
        }else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
     
      
    }
    cout <<s ;
    
    
}
int main(){
    int arr[9]={1,3,5,7,9,11,57,100,555};
    int target=555;
    searchInsert(arr,9,target);
}