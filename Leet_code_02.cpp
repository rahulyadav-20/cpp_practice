#include<bits/stdc++.h>
using namespace std;
void print(vector<int> arr){
    for(int i=0; i<arr.size(); i++){
        cout <<arr[i];
    }
}
vector <int> digit(vector<int> arr){
    for(int i=arr.size()-1; i>=0; i--){
        if(arr[i]<9){
            arr[i]++;
            return arr;
        }else{
            arr[i]=0;
        }
    }
    arr[0]=1;
    arr.push_back(0);
    return arr;
}
int main(){
    vector<int> arr={9,9,9,9,9};
    print(digit(arr));
}