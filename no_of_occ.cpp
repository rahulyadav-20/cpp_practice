#include<iostream>
using namespace std;
int FirstOcc(int arr[], int n, int key){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if (arr[mid]==key){
            ans=mid;
            e=mid-1;
        }else if (arr[mid]>key){
            e=mid-1;
        }else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }   

    return ans;
    
}
int LastOcc(int arr[],int n, int key){
    int s=0, e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }else if(arr[mid]<key){
            s=mid+1;
        }else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;

}


int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the key:";
    int key;
    cin>>key;
    cout<<"Index first:"<<FirstOcc(arr,n,key)<<endl;
    cout<<"inde last:"<<LastOcc(arr,n,key)<<endl;
    int a;
    a=LastOcc(arr,n,key)-FirstOcc(arr,n,key);
    if(a==0)
        return -1;
    else{
        cout<<"No of occression"<<a+1;
    }
    
    return 0;
}