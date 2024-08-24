#include<iostream>
#include<array>
using namespace std;
void Selection_sort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int k;
        int imin=i;
        for(int j=i; j<n; j++){
            if(arr[j]<arr[imin]){
                imin=j;

            }
        }
        swap(arr[i],arr[imin]);
        
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
    Selection_sort(arr,n);
    printArray(arr,n);

}