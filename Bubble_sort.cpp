#include<iostream>
using namespace std;
void Bubble_sort(int arr[], int n){
    bool swaped=false;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++) {
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swaped=true;  //for Optimised 
            }
        }
        if(swaped==false)
            break;
    }

}

int printArray(int arr[], int n){
 
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
int main(){
    int n;
    cout<<"size of array:";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    Bubble_sort(arr,n);
    printArray(arr,n);

}