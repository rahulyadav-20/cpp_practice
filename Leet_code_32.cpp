#include<bits/stdc++.h>
using namespace std;
string convertToTitle(int num) {
    string str="";
    while(num>0){
        /*if(num%26==0){
            str.push_back('Z');
        }else{
            char ch='A'+(num%26-1);
            str.push_back(ch);
        }*/
        num--;
        char ch='A'+num%26;
        str.push_back(ch);

        num=num/26;
    }
    reverse(str.begin(), str.end());
    return str;

}
int main(){
    int num=7011;
    cout <<"Excel number: "<<convertToTitle(num);
}