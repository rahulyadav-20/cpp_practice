#include<iostream>
using namespace std;
int singalDigit(int num){
    int num2=0;
    while(num!=0){
        int lastd=num%10;
        num2=num2+ lastd;
        num=num/10;
    }
    return num2;
}
int main(){
    char arr1[15]={'A','C'};
    char arr2[15]={'B','C','D'};
    int  arr3[26]={0};
    char arr4[26]={0};
    for(int i=0; i<15; i++){
        int j=arr1[i]-'A';
        arr3[j]++;
    }
    for(int k=0; k<15; k++){
        int j=arr2[k]-'A';
        arr3[j]++;

    }
    int k=0;
    for(int i=0; i<26; i++){
        if(arr3[i]==1){
            char ch =i+ 'A';
            arr4[k++]=ch;
            cout << ch;
        }
    }
    int num=0;
    for(int i=0; i<26; i++){
        num=num+arr4[i];
        //cout << num <<endl;
    }
    while(num>=9){
        num=singalDigit(num);
    }
    cout <<num <<endl;
    
}