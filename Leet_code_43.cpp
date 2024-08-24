//note complete code

#include<bits/stdc++.h>
using namespace std;
int minimumTotal(vector<vector<int>>& triangle) {
    int n=triangle.size();
    int sum=0;
    bool flag=true;
    for(int i=0; i<n; i++){
        if(sum<0){
            sum+=*max_element(triangle[i].begin(),triangle[i].end()); 
        }else{
            sum+=*min_element(triangle[i].begin(),triangle[i].end());
        }
    
    }
    return sum;
}
int main(){
    vector<vector<int>> tringal={{-1},{2,3},{1,-1,-3}};
    cout << minimumTotal(tringal);
    
}