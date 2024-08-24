#include<iostream>
using namespace std;
int firstrepeart(int arr[], int n){
    int last=arr[n-1];
    bool flag=0;
    for(int i=n-1; i>0; i--){
        for(int j=i-1; j>0; j--){
            if(arr[i]>=0 && arr[j]>0){
                flag=1;
                if(arr[i]==arr[j]){
                    return arr[i];

                }

            }else{
                continue;
            }
        }
    }
    if(flag==1){
        return last;
    }else{
    return 0;
    }
}
int main(){
    int n;
    cout<<"Enter the n:";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"output:"<<firstrepeart(arr,n)<<endl;
}