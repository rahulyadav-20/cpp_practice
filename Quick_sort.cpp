#include<bits/stdc++.h>
using namespace std;
int partication(vector<int> &arr,int start,int end){
    int pivot=arr[start];
    int count=0;
    for(int i=start+1; i<=end; i++){
        if(pivot>=arr[i])count++;
    }

    // place pivot at right position
    int pivotIndex=start+count;
    swap(arr[start],arr[start+count]);

    //Left and right part
    int s=start;
    int e=end;
    while(s<pivotIndex && e>pivotIndex){
        while(pivot>arr[s]){
            s++;
        }
        while(pivot<arr[e]){
            e--;
        }
        if(s<pivotIndex && e>pivotIndex)
            swap(arr[s++],arr[e--]);
        
    }
    return pivotIndex;


}

void Quick_sort(vector<int>& arr,int start,int end){
    //Base case
    if(start>=end){
       return ;
    }

    int pivot=partication(arr,start,end);

    //Left part
    Quick_sort(arr,start,pivot-1);

    //Right part
    Quick_sort(arr,pivot+1,end);

}
int main(){
    vector<int> arr{7,4,6,3,822,6,3,82,82,63,752,782,88,25,0,-9,2,-958};
    int size=arr.size();
    Quick_sort(arr,0,size-1); 

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}