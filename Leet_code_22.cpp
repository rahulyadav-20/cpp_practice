#include<bits/stdc++.h>
using namespace std;
void searchMatrix(vector<vector<int>> matrix , int target){
    int n =matrix.size();
    int m= matrix[0].size();

    int row=0;
    int col=m-1;

    while(row<n && col>=0){
        if(matrix[row][col]==target){
            cout << "row: "<<row<< " col: "<<col<<endl;
            cout <<"1"<<endl;
            exit(0);
        }
        if(matrix[row][col]<target){
            row++;
        }else{
            col--;
        }
    }
    cout <<"-1";
     
}
int main(){
    vector<vector<int>> matrix={{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    searchMatrix(matrix,1);
}