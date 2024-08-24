#include<iostream>
using namespace std;
void PrintArray(int arr[] , int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
}
void ReverseArray(int arr[], int n){
    for(int i=0; i<n; i++){
        int temp=arr[n-1-i];
        arr[n-1-i]=arr[i];
        arr[i]=temp;
    }
    
}
int main(){
    int n;
    cout<<" enter the size of array:";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    ReverseArray(arr,n);
    PrintArray(arr,n);

}