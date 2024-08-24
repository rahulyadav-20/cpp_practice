#include<bits/stdc++.h>
using namespace std;
void setZeros(vector<vector<int>> matrix){
    int n=matrix.size();
    int m=matrix[0].size();
    vector<int> arr;
    int count=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(matrix[i][j]==0){
                arr.push_back(count);
            }
            count++;
        }
    }
    for(auto i:arr){
        int row=(i/m);
        int col=(i%m);
        for(int k=0; k<n; k++){
            matrix[k][col]=0;
        }
        for(int j=0; j<m; j++){
            matrix[row][j]=0;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m ;j++){
            cout <<matrix[i][j]<<" ";
        }
        cout <<endl;
    }
}

void setZeros2(vector<vector<int>> matrix){
    int rows=matrix.size();
    int cols=matrix[0].size();
    bool firstcol=false;
    for(int i=0; i<rows;i++){
        if(matrix[i][0]==0)firstcol=true;
        for(int j=1; j<cols; j++){
            if(matrix[i][j]==0){
                matrix[i][0]=0;
                matrix[0][j]=0;
            }
        }
    }
    for(int i=rows-1; i>=0; i--){
        for(int j=cols-1; j>=1; j--){
            if(matrix[0][j]==0 || matrix[i][0]==0){
                matrix[i][j]=0;
            }
        }
        if(firstcol)matrix[i][0]=0;

    }
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<< matrix[i][j]<<" ";

        }
        cout <<endl;
    }


}
int main(){
    vector<vector<int>> matrix={{0,1,2,0},{3,4,5,2},{1,3,4,5}};
    setZeros2(matrix);
}