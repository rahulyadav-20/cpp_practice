#include<bits/stdc++.h>
using namespace std;
int max_fre(vector<int> arr){
    map<int,int> count;
    int maxf=-1;
    int maxans=-1;
    for(int i=0; i<arr.size(); i++){
        count[arr[i]]++;
        maxf=max(maxf,count[arr[i]]);
    }
    for(int i=0; i<arr.size(); i++){
        if(maxf==count[arr[i]]){
            maxans=arr[i];
        }
    }
    return maxans;
}
int main(){
    vector<int> arr={1,1,1,1,1,1,2,2,2,2,2,2,3,4,6,7};
    cout <<"Max frequncy:"<<max_fre(arr);
}
