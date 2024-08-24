// array searching
#include<iostream>
using namespace std;
int LinearSearch(int arr[], int n, int key){
    for (int i=0; i<n; i++){
        if (arr[i]==key){
            return i;
        }
    }
    return -1;
}
int BinarySearch(int arr[], int n, int key){
    int s=0;
    int e=n;
    while(s<=e){
        int mid=(s+e)/2;
        if (arr[mid]==key){
            return mid;
        }
        else if (arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }

    }
    return -1;
    
    
}


int main(){
    int n;
    cout<<"Size of array:";
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"Searching key:";
    int key;
    cin>>key;
    cout<<"Linear Search:"<<LinearSearch(arr,n,key)<<endl;
    cout<<"Binary Search:"<<BinarySearch(arr,n,key);  // only for shorted array
}