// write a programe Sum of first n natural number
#include<iostream>
using namespace std;

int sum(int n){
    int num=0;
    for (int i=1; i<=n; i++){
        num+=i;
    }
    return num;
}

int main(){
    int n;
    cout<<"n= ";
    cin>>n;
    int ans=sum(n);
    cout<<"sum of first n natural number = "<<ans<<endl;
    return 0;
}
