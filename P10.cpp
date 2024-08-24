// hole rectangular shape
#include<iostream>
using namespace std;
int main(){
    int col,row;
    cin>>col>>row;
    for (int i=1; i<=col; i++){
        for (int j=1; j<=row; j++){
            if (i==1 || i==col || j==1 || j==row){
                cout<<"*";
            
            }
            else{
                cout<<' ';
            }
        }cout<<endl;
    }
    return 0;
}