#include<bits/stdc++.h>
using namespace std;
string intToRoman(int num) {
    int number[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
    string roman[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};

    string result;
    for(int i=0; i<13; i++){
        while(num>=number[i]){
            result=result+roman[i];
            num-=number[i];
        }
    }
    return result;

}
int main(){
    int num=23;
    cout<<intToRoman(num)<<endl;
}