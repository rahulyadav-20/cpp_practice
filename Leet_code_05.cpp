//1694. Reformat Phone Number

#include<bits/stdc++.h>
using namespace std;
string reFormatNumber(string str){
    string st="";
    int count=0;
    for(int i=0; i<str.size(); i++){
        if(str[i]>='0' && str[i]<='9' ){
            count++;
            st.push_back(str[i]);
        }
    }
    int i=0;
    str.erase();
    while(count>0){
        if(count==4){
            str.push_back(st[i++]);
            str.push_back(st[i++]);
            str.push_back('-');
            str.push_back(st[i++]);
            str.push_back(st[i++]);
            count=count-4;
        }
        if(count==3){
            str.push_back(st[i++]);
            str.push_back(st[i++]);
            str.push_back(st[i++]);
            //str.push_back('-');
            count=count-3;
        }
        if(count==2){
            str.push_back(st[i++]);
            str.push_back(st[i++]);
            count=count-2;
        }
           if((count/3)>0){
            str.push_back(st[i++]);
            str.push_back(st[i++]);
            str.push_back(st[i++]);
            str.push_back('-');
            count=count-3;
        }
        //cout <<"1";
    }

    return str;
}
int main(){
    string stre="123 34-0477883-   46";
    cout <<"str:"<<reFormatNumber(stre);
    cout <<" end";
}