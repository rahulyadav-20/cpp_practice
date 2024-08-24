#include<iostream>
using namespace std;
int getcode(int arr1[], int arr2[], int arr3[], int n){
    int arr[n];
    for(int i=0; i<n; i++){
        arr[i]=arr1[i]+arr2[i]+arr3[i];
    }
    int s=0;
    int num=0;
    while(s!=n){
        int index=((arr[s]-1)%n);
        if(s%3==0){
            num=num+arr1[index];
            //return num;
        }else if(s%3==1){
            num=num+arr2[index];
            //return num;
        }else{
            num=num+arr3[index];
        }
        s++;
    }
    return num;


}
int main(){
    int arr1[]={10,33,5,40,120,98,1};
    int arr2[]={121,78,21,32,91,340,72};
    int arr3[]={65,320,72,84,32,843,40};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    cout << getcode(arr1,arr2,arr3,n) << endl; 

}