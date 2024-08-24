// adding number and multiply number


#include<bits/stdc++.h>
using namespace std;
string add(string nums1,string nums2);
string multiply(string nums1, string nums2){
    int len1=nums1.size()-1;
    int len2=nums2.size()-1;
    int carry=0;
    string result="";
    int zero=0;
    for(int i=len1; i>=0; i--){
        string temp="";
        for(int j=len2; j>=0; j--){
            //cout<<"i: "<<i<<" "<<j<<endl;
            //cout<<nums1[i]<<" "<<nums2[j]<<endl;
            int mul=(nums1[i]-'0')*(nums2[j]-'0')+carry;
            char num=(mul%10)+'0';
            carry=mul/10;
            temp=num+temp;
            //cout<<mul<<" "<<num<<"   " <<temp<<endl;

        }
        if(carry>0){
            char num=carry+'0';
            temp=num+temp;
            carry=0;
        }
        for(int k=0; k<zero; k++){
            temp.push_back('0');
        }
        zero++;
        result=add(result,temp);
    }
    int n=result.size();
    for(int u=0; u<n; u++){
        if(result[u]!='0')return result;
    }
    
    return "0";

}



string add(string nums1,string nums2){
    int len1=nums1.size()-1;
    int len2=nums2.size()-1;
    int carry=0;
    string result="";

    while(len1>=0 || len2>=0){
        if(len1>=0 && len2>=0){
            int mul=(nums1[len1]-'0')+(nums2[len2]-'0')+carry;
            char nums=(mul%10)+'0';
            carry=mul/10;
            result=nums+result;
            len1--;
            len2--;
        }
        if(len1>=0 && len2==-1){
            int mul=(nums1[len1]-'0')+carry;
            char nums=(mul%10)+'0';
            carry=mul/10;
            result=nums+result;
            len1--;
        }
        if(len2>=00 && len1==-1){
            int mul=(nums2[len2]-'0')+carry;
            char nums=(mul%10)+'0';
            carry=mul/10;
            result=nums+result;
            len2--;

        }
    }
    if(carry>0){
        char nums=carry+'0';
        result=nums+result;
    }
    return result;



}
int main(){
    string nums1="1285978465168798798798465132513546876894654548785456000000000000000000000000000000000000000000111111111111";
    string nums2="12544658484651685748546464846561516587488888888888877777777333777777777777777777778888045";
    cout<<"Ans: "<<multiply(nums1,nums2);

}