#include<bits/stdc++.h>
using namespace std;
bool Isprime(int a){
    if(a==1)
    return false;
    for (int i=2; i*i<=a; i++){
        if(a%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin >>n;
    vector<int> arr1;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0 ; i<n; i++){
        if(Isprime(arr[i])){

        }else{
            arr1.push_back(arr[i]);

        }
    }
    int sum=0;
    for(int i=0; i<arr1.size(); i++){
        sum=sum+arr1[i];
    }
    cout <<"sum= "<< sum;
}