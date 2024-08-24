#include<bits/stdc++.h>
using namespace std;
void merge_array(vector<int> & arr, int start,int end){
    int mid=start+(end-start)/2;
    int len1=mid-start+1;
    int len2=end-mid;
    int main_array_length=start;

    int *first_array=new int [len1];
    int *second_array=new int [len2];
    for(int i=0; i<len1; i++){
        first_array[i]=arr[main_array_length++];
    }
    main_array_length=mid+1;

    for(int i=0; i<len2; i++){
        second_array[i]=arr[main_array_length++];
    }

    // Merge two sorted array
    main_array_length=start;
    int idx1=0;
    int idx2=0;
    while(idx1<len1 && idx2<len2){
        if(first_array[idx1]<second_array[idx2]){
            arr[main_array_length++]=first_array[idx1++];
        }else{
            arr[main_array_length++]=second_array[idx2++];
        }
    }
    while(idx1<len1){
        arr[main_array_length++]=first_array[idx1++];
    }
    while(idx2<len2){
        arr[main_array_length++]=second_array[idx2++];
    }
    delete []first_array;
    delete []second_array;

}

void merge_Sort(vector<int> & arr, int start, int end){
    if(start>=end){
        return ;
    }
    int mid=start+(end-start)/2;
    // left part
    merge_Sort(arr,start,mid);

    //Right part
    merge_Sort(arr,mid+1,end);

    //combine two sorted array
    merge_array(arr,start,end);
}
int main(){
    vector<int> arr={5,2,3,1};
    merge_Sort(arr,0,arr.size()-1);

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}