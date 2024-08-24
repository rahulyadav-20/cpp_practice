
#include<iostream>
using namespace std;
void PrintArray(int arr[] , int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
}
void ReverseArray(int arr[], int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        int temp=arr[e];
        arr[e]=arr[s];
        arr[s]=temp;
        s++;
        e--;
    }
    
}
int main(){
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    ReverseArray(arr,n);
    PrintArray(arr,n);

}