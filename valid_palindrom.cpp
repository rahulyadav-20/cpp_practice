#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
bool valid(char ch){
    if((ch>='a' && ch<= 'z') || (ch>='A' && ch<= 'Z') || (ch>='0' && ch<='9')){
        return 1;

    }
    return 0;
}
char toLowerCase(char ch){
    if((ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
        return ch;
    }else{
        char temp =ch-'A'+'a';
        return temp;
    }
    
        
    

}
bool checkPalindrom(string  ch){
    int s=0;
    int e=ch.length()-1;
    while(s<=e){
        if(ch[s]!=ch[e]){
            return 0;
        }else{
            s++;
            e--;
        }
    }
    return 1;
}
bool ispalindrom(string s){
    // useless character remove
    string temp="";
    for(int i=0; i<s.size(); i++){
        if(valid(s[i])){
            temp.push_back(s[i]);
        }
    }
    // change to upper case to lower case
    for(int i=0; i<temp.size(); i++){
        temp[i]=toLowerCase(temp[i]);

    }
    return checkPalindrom(temp);

}
int main(){
    string str="rahul yadav";
    cout << "Input:";
    //cin >> str;
    cout << str <<endl;
    cout << ispalindrom(str) << endl;
}