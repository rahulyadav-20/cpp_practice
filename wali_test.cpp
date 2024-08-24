#include<iostream>
using namespace std;
int main(){
    string input_from_question;
    getline(cin,input_from_question);
    int arr[26]={0};
    int n=input_from_question.size();
    for(int i=0; i<n; i++){
        int j=input_from_question[i]-'a';
        arr[j]++;
    }
    int count=0; 
    for(int i=0; i<26; i++){
        if(arr[i]>0){
            count++;
        }
    }
    cout <<count;
    



}
