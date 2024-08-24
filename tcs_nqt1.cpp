#include<iostream>
using namespace std;
void coin(int n, int arr[], int key){
    int sum=0,flag=0;
    int p1=0, p2=0;

    while(p2<=n && p1<n){
        //sum=sum+arr[p2];
        if(sum==key){
            cout<<p1+1 <<" "<<p2;
            exit(0);
        
        }
        if(sum<key){
            
            sum=sum+arr[p2];
            p2++;
            
        }else{
            sum=sum-arr[p1];
            p1++;
        }
    }


}

int main(){
   // int n ,key;
    cout <<"n";
    //cin>>n;
    int arr[7]{1,4,0,0,3,10,5};
    /*for(int i=0; i<n; i++){
        cin >> arr[i];

    }*/
    //cin >> key;
    coin(7,arr,7);

}