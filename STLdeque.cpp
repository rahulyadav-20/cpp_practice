#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;

    d.push_front(2);
    d.push_back(98);
    d.push_front(20);
    d.push_back(9);
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    d.pop_back();
    d.pop_front();
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;


    cout<<"Before erase "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"after erase "<<d.size()<<endl;
    for(int i:d){
        cout<<i<<endl;
    }cout<<endl;



}