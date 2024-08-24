#include<iostream>
using namespace std;
int GetPivot(int arr[], int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;

}
int main(){
    int arr[7]={6,7,8,9,101,1,3};
    cout<<"Pivot index:"<<GetPivot(arr,7);
}