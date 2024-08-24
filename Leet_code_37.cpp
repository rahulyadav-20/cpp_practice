#include<bits/stdc++.h>
using namespace std;
void islandPerimeter(vector<vector<int>>& grid) {
    int n=grid.size();
    int m=grid[0].size();
    int perimeter=0;
    for(int row=0; row<n; ++row){
        for(int col=0; col<m; ++col){
            if(grid[row][col]==1){
                perimeter=perimeter+4;
                if(row > 0) perimeter-=grid[row-1][col];
                if(col > 0) perimeter-=grid[row][col-1];
                if(row <n-1)perimeter-=grid[row+1][col];
                if(col<m-1) perimeter-= grid[row][col+1];
            }
        }
    }

    cout <<perimeter;
    
int main(){
    vector<vector<int>> grid={{0,1,0,0},{1,1,1,0},{0,1,0,0},{1,1,0,0}};
    cout <<"ans:";
    islandPerimeter(grid);
   

}