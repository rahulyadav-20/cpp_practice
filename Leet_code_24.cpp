#include<bits/stdc++.h>
using namespace std;
int StringToNum(string str){
    int n=str.size()-1;
    long long int num=0;
    for(int i=n; i>=0; i--){
        if(str[i]=='0' || str[i]=='1'){
            int digit=str[i]-'0';
            //cout <<digit<<" ";
            num+=digit*(1<<(n-i));
            //cout<<num<<endl;
        }else{
            return 0;
        }
    }
    return num;
}
string numToBinary(int n){
    string s="";
    if(n==0){
    s.push_back('0');
    return s;
    }
    while(n>0){
        s.push_back((n%2)+'0');
        n=n/2;
    }
    reverse(s.begin(),s.end());
    return s;
}

void AddBinary_1(string a, string b){
    //int n=StringToNum(a)+StringToNum(b);
    int n=stoi(a,0,2)+stoi(b,0,2);
    cout <<StringToNum(a)<<endl;
    cout<<StringToNum(b)<<endl;
    cout <<n<<endl;
    cout <<"N: "<<numToBinary(n)<<endl;
} 
void AddBinary(string a,string b){
    int s1=a.size()-1;
    int s2=b.size()-1;
    int carry=0;
    string s="";
    while(s1>=0 || s2>=0 || carry!=0 ){
        int x=0;
        if(s1>=0 && a[s1]=='1')x=1;
        int y=0;
        if(s2>=0 && b[s2]=='1')y=1;
        char result=(x+y+carry)%2+'0';
        //cout <<x<<" "<<y<<" "<<carry<<" "<<result<<endl;
        s.push_back(result);
        carry=(x+y+carry)/2;  
        s1--;
        s2--;  
    }
    reverse(s.begin(),s.end());
    cout<<"S: " <<s<<endl;
}
int main(){
    string a="0";
    string b="0";
    AddBinary(a,b);
    
}