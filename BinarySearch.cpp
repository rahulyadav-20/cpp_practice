#include<iostream>
using namespace std;
int BinarySearch(int arr[], int n, int key){
    int s=0;
    int e=n-1;
    
    while(s<=e){
        int mid =s+(e-s)/2;
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]<key){
            
            s=mid+1;
        }else{
            e=mid-1;
        }
        mid=s+(e-s)/2;

    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    } 
    cout<<"key:";
    int key;
    cin>>key;
    cout<<"Element index:"<<BinarySearch(arr, n, key)<<endl;

}