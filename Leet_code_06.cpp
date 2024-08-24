#include<bits/stdc++.h>
using namespace std;
int rti(char ch){
    if(ch=='I')return 1;
    if(ch=='V')return 5;
    if(ch=='X')return 10;
    if(ch=='L')return 50;
    if(ch=='C')return 100;
    if(ch=='D')return 500;
    if(ch=='M')return 1000;
    return 0;
}
void romeTOint(string S){
int I=1,V=5,X=10,L=50,C=100,D=500,M=1000;
int i=0,num=0;
while(i<S.size()){
    int n=rti(S[i]);
    if(n<rti(S[i+1])){
        num=num+(rti(S[i+1])-n);
        i=i+2;
        cout << "N1:"<<num<<endl;
    }else{
        num+=n;
        i++;
        cout <<"N2:"<<num<<endl;

    }
}
//return num;
}
int main(){
    string roman="MCMXCIV";
    cout <<"Num:";
    romeTOint(roman);

}