#include<bits/stdc++.h>
using namespace std; 
void pyramid();
void patten();
void patten_2();
void patten_03();


int main() {
	// your code goes here
	int n;


	}
	for(int i=0; i<n; i++){
	    if(arr[i][0]<=arr[i][1]-arr[i][2]){
	        cout <<"Yes";
	    }else{
	        cout <<"No";
	    }
	    
	}
	return 0;
}



















void patten_03(){
    int n=9;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=(n-row)){
            cout <<" ";
            col++;
        }
        while(col<=n){
            cout <<"*";
            col++;
        }
        cout <<endl;
        row++;

    }
}



void patten_2(){
    int n;
    cout << "n:";
    cin >> n;
    int row=1;
    while(row<=n){
        int col=1;
        char ch='A'+n-row;
        while(col<=row){
            cout << ch;
            ch++;
            col++;
        }
        row++;
        cout << endl;

    }

}

















void patten(){
    int n=5;
    int row=1;
    
    while(row<n){
        int col=1;                 
        while(col<=row){
            char ch='A'+row+col-2;
            cout << ch;
            col++;
        }
        row++;
        cout << endl;

    }
}


void pyramid(){
    int n;
    cout << "n:";
    cin >>n;
    int row=n,j=1;
    while(row>=1){
        int i=1;
        while(i<row){
            cout <<" ";
            i++;
        }
        int m=1;
        while(m<=(j*2-1)){
            cout <<"*";
            m++;
        }
        j++;
        int k=1;
        while(k<row){
            cout <<" ";
            k++;
        }
        row--;
        cout <<endl;


    }

    
}