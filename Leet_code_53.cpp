#include<bits/stdc++.h>
using namespace std;
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int n1=nums1.size();
    int n2=nums2.size();
    if(n2>n1){
        swap(nums1,nums2);
        swap(n1,n2);
    }
    int s1=0;
    int e1=n1-1;
    int s2=0;
    int e2=n2-1;
    int mid1=s1+(e1-s1)/2;
    int mid2=s2+(e2-s2)/2;
    int count=0;
    while(s1<e1 && s2<e2 ){
        cout<<mid1<<"  "<<mid2<<endl;
        if(nums1[mid1]>=nums2[mid2+1] && nums2[mid2]<=nums1[mid1+1]){
            cout<<nums1[mid1]<<" "<<nums1[mid1+1]<<endl;
            cout<<  nums2[mid2]<<" "<<nums2[mid2+1]<<endl;
            break;
        }
        if(nums1[mid1]<nums2[mid2+1]){
            s1=mid1+1;
            mid1=s1+(e1-s1)/2;
            e2=mid1-1;
            mid2=s2+(e2-s2)/2;
            cout<<"mid1 "<<mid1<<" "<<endl;

        }else if(nums1[mid1+1]<nums2[mid2]){
            e2=mid2-1;
            mid2=s2+(e2-s2)/2;
            cout<<"mid2 "<<mid2<<" "<<endl;
        }else{
            cout<<mid1<<" "<<mid2<<endl;
            count++;
            if(count==5)break;
        }
        count++;
        if(count==5)break;
    }

    if((n1+n2)%2==0){
        return max(nums1[mid1],nums2[mid2])+max(nums1[mid1+1],nums2[mid2+1])/2.0;
    }else{
        return max(nums1[mid1],nums2[mid2]);
    }



}
int main(){
    vector<int> nums1={1,2,3,4,5};
    vector<int> nums2={6,7,8,9,10};
    cout<<"Ans: "<<findMedianSortedArrays(nums1,nums2);

}
