#include<bits/stdc++.h>
using namespace std;
void print2D(vector<vector<int>>& pascal){
    cout <<" HEllo"<<endl;
    int n=pascal.size();
    //int m=pascal[n-1].size();
    
    for(int i=0; i<n; i++){
        int m=pascal[i].size();
        for(int j=0; j<m; j++){
            cout << pascal[i][j]<<" ";
        }
        cout <<endl;
    }

}

vector<vector<int>> Pascal_triangle(int n){
    vector<vector<int>> r(n);
    for(int i=0; i<n; i++){
        r[i].resize(i+1);
        r[i][0] = r[i][i]=1;
        for(int j=1; j<i; j++){
            r[i][j]=r[i-1][j-1]+r[i-1][j];
        }
        
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<< r[i][j]<<" ";
        }
        cout <<endl;
    }
    return r;
    

}
int main(){
    int n=5;
    vector<vector<int>> pascal;
    Pascal_triangle(n);
    print2D(pascal);
}