#include<bits/stdc++.h>
using namespace std;
string longestPalindrome(string s) {
    int n=s.size();
    if(n<=1)return s;
    int max_length=1;
    int strat=0;
    int end=0;

    // odd case 
    for(int i=1; i<n-1; i++){
        int left=i,right=i;
        while(left>=0 && right<n){
            if(s[left]==s[right]){
                left--;
                right++;
            }else{
                break;
            }

        }
        int diff=right-left-1;
        if(max_length<diff){
            max_length=diff;
            strat=left+1;
            end=right-1;
        }
    }

    //even case
    for(int i=0; i<n-1; i++){
        int left=i,right=i+1;
        while(left>=0 && right<n){
            if(s[left]==s[right]){
                left--;
                right++;
            }else{
                break;
            }
        }
        int diff=right-left-1;
        if(max_length<diff){
            max_length=diff;
            strat=left+1;
            end=right-1;
        }

    }

    return s.substr(strat,max_length);


}
int main(){
    string str="bb";
    cout <<longestPalindrome(str);
}
