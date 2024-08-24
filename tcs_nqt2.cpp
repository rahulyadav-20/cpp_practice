#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void fuel(int n, int  arr1[],int arr2[],int k){
    float arr3[n];
    for(int i=0; i<n; i++){
        arr3[i]=(float)arr2[i]/(float)arr1[i];
        cout<<arr3[i]<<" ";
    }
    sort(arr3,arr3+n);
    cout<<arr3[0];
    int p=0;
    int vol=0;
    for(int i=n; i>=0; --i){
        int s=n;
        if(p<k){
            p=p+arr1[n];
            vol=vol+arr2[n];
            n--;

        }
    }
  
}
int main(){
    int n=5,k=105;
    int  arr1[n]={10,10,40,50,90};
    int arr2[n]={10,20,20,50,150};
    fuel(n,arr1,arr2,k);
}