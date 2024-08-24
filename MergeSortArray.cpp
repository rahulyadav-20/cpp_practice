#include<iostream>
using namespace std;
void mergeSortArray(int arr1[], int n,int arr2[], int m, int arr[]){
int i=0, j=0, k=0;
while(i<n && j<m){
    if(arr1[i]>arr2[j]){
        arr[k++]=arr2[j++];
    }else{
        arr[k++]=arr1[i++];
    }
}

    while(i<n){
        arr[k++]=arr1[i++];
    }
    while(j<m){
        arr[k++]=arr2[j++];
    }


}
void printarr(int arr[], int x){
    for(int i=0; i<x; i++){
       cout<<arr[i]<<" "; 
    }
    cout<<endl;
}
int main(){
    int arr1[7]={1,3,6,77,89,100,103};
    int arr2[5]={0,2,5,67,83};
    int arr[12]={0};

    mergeSortArray(arr1,7,arr2,5,arr);
    printarr(arr,12);
    
}