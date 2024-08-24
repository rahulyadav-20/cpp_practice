#include<iostream> 
using namespace std;
int main (){
    int p=1,q=2,r=10;
    if((q&p)<(8-q)){
        p=(r+12)^q;
        if((r+3)<(3-r)){
            p=q^q;

        }else{
            if((q^p)<r){
                q=5+r;
                r=(r^q)+q;
            }
        }
        r=(r+4)+p;
    }
    cout <<p+q+r;
}