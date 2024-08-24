#include<iostream>
using namespace std;
int sqrtInteger(int n){
    int s=0;
    int e=n;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        int sqrt=mid*mid;
        if(sqrt==n){
            return mid;
        }
        if(sqrt<n){
            ans=mid;
            s=mid+1;
        }else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
        cout<<e<<endl;
    }
    return ans;
}
double sqrtDecimal(int n, int decimal, int tempsol){
    double factor=1;
    double ans=tempsol;
    double sqrt=tempsol*tempsol;
    if(sqrt==n){
        return tempsol;
    }else{
    
        for(int i=0; i<decimal; i++){
            factor=factor/10;
            for( double j=factor; j*j<=n; j+=factor){
                ans=j;
            }
        }
        return ans;
    }
}
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int tempsol=sqrtInteger(n);
    cout<<"squre root:"<<tempsol<<endl;;
    cout<<"Squre root with decimal:"<<sqrtDecimal(n,5,tempsol);

}