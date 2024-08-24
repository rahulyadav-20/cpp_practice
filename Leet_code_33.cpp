#include<bits/stdc++.h>
using namespace std;
int titleToNumber(string columnTitle) {
    int n=columnTitle.size();
    long long int sum=0;
    for(int i=0; i<n; i++){
        //sum*=26;
        int sum1=columnTitle[i]-'A'+1;
        sum=sum*26+sum1;

    }
    //sum=sum+(columnTitle[n-1]-'A'+1);
    return sum;
}
int titleToNumber_2(string columnTitle) {
    int result=0;
    for(char c:columnTitle)
    {
        int d=c-'A'+1;
        result=result*26+d;
    }
    return result;
    }
int main(){
    string str="FXSHRXW";
    cout<<"ans: " <<titleToNumber(str);
}