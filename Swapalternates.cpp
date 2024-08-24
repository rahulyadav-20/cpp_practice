#include<iostream>
using namespace std;
void PrintArray(int arr[] , int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
}
void Swap_alternate(int arr[],int n){  //swap  array alternates element
    for(int i=0; i<n-1; i=i+2){
        int j=i+1;
        int temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
    }

}
void Swap_alternate2(int arr[], int n){
    for (int i=0; i<n; i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int arr[6]={1,2,3,4,5,9};
    Swap_alternate(arr,6);
    PrintArray(arr,6);
    cout<<endl<<"2nd method"<<endl;
    Swap_alternate2(arr,6);
    PrintArray(arr,6);
}