#include<bits/stdc++.h>
using namespace std;
void spiralOrder(vector<vector<int>>& matrix){
    int n=matrix.size();
    int m=matrix[0].size();
    int count=0;
    int total=m*n;

    vector<int> arr;

    // Index
    int Fr=0;
    int Lr=n-1;                                             
    int Fc=0;
    int Lc=m-1;

   
    while(count<total){
        // Print First Row
        for(int i=Fr; count<total && i<=Lc; i++){
            arr.push_back(matrix[Fr][i]);
            cout <<arr[count]<<" ";
            count++;
        }
        Fr++;

        //Print Last col
        for(int i=Fr; count<total && i<=Lr; i++){
            arr.push_back(matrix[i][Lc]);
            cout << arr[count] <<" ";
            count++;
        }
        Lc--;

        //Print Last Row
        for(int i=Lc; count<total && i>=Fc; i-- ){
            arr.push_back(matrix[Lr][i]);
            cout << arr[count]<<" ";
            count++;

        }
        Lr--;

        //Print First col
        for(int i=Lr; count<total && i>=Fr; i--){
            arr.push_back(matrix[i][Fc]);
            cout << arr[count]<<" ";
            count++;
        }
        Fc++;

    }


}
int main(){
    vector<vector<int>> matrix={{1,2,3,12},{4,5,6,11},{7,8,9,10}};
    spiralOrder(matrix);
}