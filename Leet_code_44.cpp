#include<bits/stdc++.h>
using namespace std;
void removechar(string& s){
    int n=s.size();
    for(int i=0; i<n-1; i++){
        if(s[i]==' ' && s[i]==s[i+1] ){
            s.erase(s.begin()+i);
            i--;
        }

    }
    if(s[0]==' '){
        s.erase(s.begin()+0);
    }
    int lastidx=s.size()-1;
    if(s[lastidx]==' '){
        s.erase(s.begin()+lastidx);
    }
}
string reverseWords(string s) {
    removechar(s);
    reverse(s.begin(),s.end());
    int n=s.size();
    int start=0;
    int end=0;
    for(int i=0; i<n; i++){
        if(s[i]==' '|| i==n-1){
            end=i-1;
            if(i==n-1){
                end=i;
            }else{
                end=i-1;
            }

            while(start<end){
                swap(s[start++],s[end--]);
        
            }
            //cout<<s<<" "<<start<<" "<<end<<endl;
            start=i+1;
            //swap(start,end);
        }
    }
    return s;

        
        
}
int main(){
    string str="                  the          sky           is       a          blue      ";
    //cout <<removechar(str);
    cout <<reverseWords(str);

}