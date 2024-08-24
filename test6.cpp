#include<iostream>
#include<string>
using namespace std;
void check(string s1){
    int in=1;
    int de=1;
    for(int i=0; i<s1.size()-1; i++){
        int a=s1[i];
        if(a<=s1[i+1]){
            a=s1[i+1];
            in++;
        }else{
            a=s1[i+1];
            de++;
        }

    }
    if(in==s1.size()){
        cout <<"Increasing";
    }else if(de==s1.size()){
        cout <<"Decreasing";
    }else{
        cout <<"invalid";
    }
}
int mispalace(string s1, string s2){
    int count=0;
    for(int i=0; i<s1.size(); i++){
        if(s1[i]!=s2[i]){
            count++;
        }
    }
    return count;
}
int main(){
    string s1="";
    string s2="";
    cout<< "Input1:" <<endl;
    cin >> s1;
    cout <<"Input:" <<endl;
    cin >> s2;
    check(s1);
    cout << mispalace(s1,s2);
}