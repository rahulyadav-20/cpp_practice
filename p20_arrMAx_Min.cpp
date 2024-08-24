// write a code to find Max and Min of the array
#include<iostream>
using namespace std;
int main (){
    cout<<"Size of array: ";
    int n;
    cin>>n;
    int array[n];
    for ( int i=0; i<n; i++){
        cin>>array[i];
    }
    int count=0;
    for (int i=0; i<n; i++){
        cout<<array[i]<<" "<<endl;;
        count+=array[i];
    }
    cout<<"sum of array: "<<count<<endl;
    
    int MaxNo=array[0];
    int MinNo=array[0];
    for (int i=0; i<n; i++){
        if (array[i]>MaxNo){
            MaxNo=array[i];
        }
        if(array[i]<MinNo){
            MinNo=array[i];
        }
    }
    cout<<"Max_no: "<<MaxNo<<endl<<"Min_No: "<<MinNo;
    return 0;
}