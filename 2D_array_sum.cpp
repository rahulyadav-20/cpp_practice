#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout <<"row:";
    cin >> row;
    cout << "col:";
    cin >> col;
    int arr[row][col];
   
    // taking input
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> arr[i][j];
        }
    }
    // output
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
}