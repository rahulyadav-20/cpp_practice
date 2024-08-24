#include<bits/stdc++.h>
using namespace std;

void rotate_matrix(vector<vector<int>>& matrix){
    int n=matrix.size();
    
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
           // cout <<matrix[i][j]<<"  ";
            swap(matrix[i][j],matrix[j][i]);
           // cout <<matrix[i][j]<<endl;
        }
    }
    for(int i=0; i<n; i++){
        
        reverse(matrix[i].begin(),matrix[i].end());
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout <<matrix[i][j]<<" ";
        }
        cout <<endl;
    }

}
int main(){
    vector<vector<int>> matrix={{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};
    rotate_matrix(matrix);
}