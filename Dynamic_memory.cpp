#include<bits/stdc++.h>
using namespace std;
void finduniqe(vector<int> arr){
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1]){
            cout <<arr[mid]<<endl;
            exit(0);
        }
        if((s>0 && arr[s]!=arr[s+1] && arr[s]!=arr[s-1]) || (s==0 && arr[s]!=arr[s+1])){
            cout <<arr[s]<<endl;
            exit(0);
        }
        if((e<arr.size()-1 && arr[e]!=arr[e+1] && arr[e]!=arr[e-1]) || (e==arr.size()-1 && arr[e]!=arr[e-1])) {
            cout <<arr[e]<<endl;
            exit(0);
        }

        if(arr[mid] == arr[mid-1]){
            cout<<"s: "<<s<<" "<<"e: "<<e<<" "<<mid<<" "<<arr[mid]<<endl;
            s=mid+1;
        }else if(arr[mid]==arr[mid+1]){
            //cout<<"e: "<<e<<" "<<mid<<" "<<arr[mid]<<endl;
            //out<<"s: "<<s<<" "<<"e: "<<e<<" "<<mid<<" "<<arr[mid]<<endl;

            e=mid-1;
            cout<<"s: "<<s<<" "<<"e: "<<e<<" "<<mid<<" "<<arr[mid]<<endl;
        }
        mid=s+(e-s)/2;

    }
    cout <<"No";
}
int main(){
    vector<int> arr={1,1,4,6,6,50,50,65,65,85,85};
    finduniqe(arr);
}