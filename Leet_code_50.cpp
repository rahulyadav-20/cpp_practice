#include<bits/stdc++.h>
using namespace std;
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int x1=max(ax1,bx1);
        //cout<<abs(ax1)<<" "<<abs(bx1)<<endl;
        int x2=min(ax2,bx2);
        int y1=max(ay1,by1);
        int y2=min(ay2,by2);
        //cout<<x1<<" "<<x2<<" "<<y1<<" "<<y2<<" "<<endl;
        int c1=x2-x1;
        int c2=y2-y1;
        int comman_area=0;
        if(c1>0 && c2>0){
            comman_area=(x1-x2)*(y1-y2);
        }
        int area1=(ax1-ax2)*(ay1-ay2);
        int area2 =(bx1-bx2)*(by1-by2);
        int ans=area1+area2-comman_area;
        return ans;

    
        
    }
int main(){
    cout<<"ans: "<<computeArea(-3,0,3,4,0,-1,9,2)<<endl;
    
}