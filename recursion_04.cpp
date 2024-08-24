#include<bits/stdc++.h>
using namespace std; 
string reverse_string(string& str,int s){
    int e=str.size()-1-s;
    if(s>e)return str;
    swap(str[s++],str[e--]);
    return reverse_string(str,s); 
}
bool isPalindrome(string & str,int start,int end){
    if(start>end)return true;
    if(str[start]!=str[end]){
        return false;
    }else{
        return isPalindrome(str,start+1,end-1);
    }
}
int main(){
    string str="abba";
    cout<<reverse_string(str,0)<<endl;
    if(isPalindrome(str,0,str.size()-1)){
        cout<<"string is Palindrome"<<endl;
    }else{
        cout<<"string is not Palindrome"<<endl;
    }

}