#include<bits/stdc++.h>
using namespace std;

void jaggered_array(){
    int n;
    cout <<"N: ";
    cin>>n;
    int **arr=new int *[n];
    for(int i=0; i<n; i++){
        arr[i]=new int [i];

    }

    //taking input
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cin>>arr[i][j];
        }
    }
    //taking output
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout <<arr[i][j]<<" ";
        }
        cout <<endl;
    }
    for(int i=0; i<n; i++){
        delete []arr[i];
    }
    delete []arr;
}

int main(){

    jaggered_array();
    cout <<"-----------------------------------------------------------------------------------------------------------";

    int n,m;
    cout <<"N: ";
    cin>>n>>m;

    //1D array
    int *array=new int[n];
    cout <<"Done"<<endl;
    delete []array;


    // Creating 2D array
    int **arr=new int*[n];
    for(int i=0; i<n; i++){
        arr[i]= new int[m];
    }

    cout<<"Done"<<endl;

    //Taking input 
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
        
    }
    //print  element
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout <<arr[i][j]<<" ";
        }
        cout <<endl;
    }

    //releasing memory
    for(int i=0; i<n; i++){
        delete [] arr[i];  //delete pointer 
    }
    delete []arr; //delete
    cout <<"Done";
}