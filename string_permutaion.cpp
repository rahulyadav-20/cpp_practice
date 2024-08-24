#include<iostream>
#include<string>
using namespace std;
bool check(int count1[], int count2[]){
    for(int i=0; i<26; i++){
        if(count1[i]!=count2[i]){
            return 0;
        }
    }
    return 1;
}
bool s_permutaion(string s1, string s2){
    int count1[26]={0};
    //count the no of occurence of string s1
    for(int i=0; i<s1.size(); i++){
        int index=s1[i]-'a';
        count1[index]++;
    }
    int i=0;
    int window=s1.size();
    int count2[26]={0};
    while(i<window && i<s2.size()){
        int index=s2[i]-'a';
        count2[index]++;
        i++;
    }
    if(check(count1,count2)){
        return 1;
    }
    while(i<s2.size()){
        int newchar=s2[i]-'a';
        count2[newchar]++;
        int oldchar=s2[i-window]-'a';
        count2[oldchar]--;
        i++;
        if(check(count1,count2)){
            return 1;
        }
        
    }
    return 0;

}
int main(){
    string s1="geeks ";
    string s2="geeksforgeeks";
    cout << s_permutaion(s1,s2);

}