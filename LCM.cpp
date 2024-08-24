#include<iostream>
#include<math.h>
using namespace std;
int LCM(int a,int b){
    int j=max(a,b);
    int c=a*b;
    int i;
    for (i=j; i<=c; i++){
        if(i%a==0 && i%b==0){
            break;
        }
    }
    return i;

}


int main(){
    int a,b;
    cout<<"Enter the two number"<<endl;
    cin>>a>>b;
    cout<<LCM(a,b)<<endl;
}