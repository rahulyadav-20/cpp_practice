#include<bits/stdc++.h>
using namespace std;
int LCM(int a,int b){
    return (a*b)/__gcd(a,b);
}
 int subarrayLCM(vector<int>& nums, int k) {
    int n=nums.size();
    int count=0;
    int lcm=k;
    for(int i=0; i<n; i++){
        int lcm=nums[i];
        for(int j=i; j<n;j++){
            lcm=LCM(lcm,nums[j]);
            if(lcm==k)
                count++;
            if(lcm>k)break;
        }
        
    }
    return count;
}
int main(){
    vector<int> nums={3,6,2,7,1};
    cout<<"ANS: "<<subarrayLCM(nums,6)<<endl;
    cout<<"LCM: "<<LCM(3,6);

}