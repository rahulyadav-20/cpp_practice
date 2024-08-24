#include<iostream>
using namespace std;
bool palindrom(char name[], int len){
    int s=0; 
    int e=len-1;
    while(s<=e){
        if(name[s]!=name[e]){
            return false;
        }else{
            s++;
            e--;
        }
    }
    return true;
}

void reverse(char name[],  int len){
    int s=0;
    int e=len-1; 
    while(s<=e){
        swap(name[s++],name[e--]);
    }
}

int getStringLength(char name[]){
    int count =0;
    for(int i=0; name[i]!='\0'; i++){
        count++;
    }
    return count;
}

int main(){
    char name[20];
    cout << "Enter you name:";
    cin >> name;
    
    cout << "Hii i'm " << name << endl;
    cout << "String Length:" << getStringLength(name) << endl;
    int len=getStringLength(name);
    cout<<"Palindrom is or not: "<<palindrom(name,len)<<endl;
    reverse(name,len);
    cout<<name<<endl;
}