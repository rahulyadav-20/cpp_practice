#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	unordered_map<int,int> mp;
	for(int i=0; i<n; i++){
		cin>>arr[i];
		mp[arr[i]]++;
	}
	for(int i=0; i<n; i++){
        if(mp.count(arr[i])){
            mp.erase(arr[i]);
            cout<<arr[i]<<endl;
        }
    }
}