#include<bits/stdc++.h>
using namespace std;

void Max_water(vector<int>& height){
    int n=height.size();
    int Max_area=INT_MIN;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int area=abs(i-j) * min(height[i],height[j]);
            Max_area=max(Max_area,area);
        }
    }
    cout <<"Max Area: "<<Max_area<<endl;
    

}
void Max_water2(vector<int>& height){
    int n=height.size();
    int s=0;
    int e=n-1;
    int max_area=0;
    while(s<=e){
        int area=0;
        area=abs(e-s) * min(height[s],height[e]);
        max_area=max(max_area,area);
        if(height[s]<height[e]){
            s++;
        }else{
            e--;
        }
        
    }
    cout <<"Max_area: " <<max_area;
}
int main(){

    vector<int> height={1,8,6,2,5,4,8,3,4};
    Max_water2(height);
}