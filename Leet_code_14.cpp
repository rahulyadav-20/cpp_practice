#include<bits/stdc++.h>
using namespace std;

void KthDistinct(vector<string>& arr,int k){
    int n=arr.size();
    map<string,int>m;
    
    /*map<string ,int> :: iterator it;
    for(it=m.begin(); it!=m.end(); it++){
        cout <<it-> first<<" "<<it->second<<endl;
    }*/

    for(auto i:arr)m[i]++;

    for(auto j:arr){
        if(m[j]==1) k--;
        if(k==0){
            cout <<j;
            exit(0);
        }
    }
    cout <<"";
    
    
}
   


int main(){
    vector<string> arr={"d","b","c","b","c","a"};
    KthDistinct(arr,2);

}