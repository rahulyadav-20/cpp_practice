#include<iostream>
using namespace std;
int findpin(int n1, int n2, int n3, int n4){
    int sumodd=0;
    int sumeven=0;
    int ans=0;
    int arr[3]={n1,n2,n3};
    for(int i=0; i<3; i++){
        int a=arr[i];
        while(a!=0){
            int lastd=a%10;
            if(lastd%2==0){
                sumeven=sumeven+lastd;
            }else{
                sumodd=sumodd+lastd;
            }
            a=a/10;

        }
    }
    if(n4%2==0){
        ans=sumeven-sumodd;
    }else{
        ans=sumodd-sumeven;
    }
    return ans;
}



int main(){
    int n1,n2,n3,n4;
    cout<<"enter the no";
    cin>>n1 >> n2 >> n3 >> n4;
    cout<<findpin(n1,n2,n3,n4)<<endl;
    return 0;
}