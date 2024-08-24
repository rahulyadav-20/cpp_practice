#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int GCD(int a,int b){
    while(a!=b){
        if (a>b){
            a=a-b;
        }else if(b>a){
            b=b-a;
        }
    }
    return a;


   /* int i=min(n1,n2);
    while(i!=0){
        if (n1%i==0 && n2%i==0){
            break;
        }
        i--;
    }
    return i;*/
     
}
int _GCD(int a,int b){
    if(a==0)return b;
    if(b==0)return a;
    return _GCD(b,a%b);
}
int arr_GCD(vector<int>& nums){
    int n=nums.size();
    int gcd=nums[0];
    for(int i=1; i<n; i++){
        gcd=_GCD(gcd,nums[i]);
    }
    return gcd;

}
int main(){
    int n1,n2;
    cout<<"Enter the two number:"<<endl;
    //cin>>n1>>n2;
    vector<int> arr={48,190,56,20,78,36,44};
    cout<<arr_GCD(arr);
    return 0;
}