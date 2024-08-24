#include<bits/stdc++.h>
using namespace std;
bool checkVowel(char ch){

    if(ch=='a' || ch=='e' ||ch=='i' || ch=='o' || ch=='u')return true;
    if(ch=='A' || ch=='E' ||ch=='I' || ch=='O' || ch=='U')return true;
    return false;

}
void reverseVowels(string str){
    int s=0;
    int e=str.size()-1;
    while(s<e){
        if(checkVowel(str[s])==1  && checkVowel(str[e])==1){
            swap(str[s],str[e]);
            s++;
            e--;
        }
        if(!checkVowel(str[s]))s++;
        if(!checkVowel(str[e]))e--;
    }
    cout <<"str: "<<str;

}
int main(){
    string str=" ";
    reverseVowels(str);
}