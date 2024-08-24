#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string ,int> m;
    //m["rahul"]=23;
    //m["yadav"]=24;
    pair<string, int> p=make_pair("mast",9);
    m.insert(p);
    pair<string ,int> p1("school",34);
    m.insert(p1);
    pair<string,int> p2=make_pair("tom",3);
    m.insert(p2);
    //cout << m.at("tom")<<endl;
    //cout << m["rahul"] <<endl;
    //cout << m["unknownkey"] << endl;
    //cout << m.at("unknownkey") <<endl;
    cout << "Size:"<<m.size()<<endl;
    cout<<"count:" <<m.count("rahul") <<endl;
    //m.erase("tom");
    m["tom"]++;
    cout <<"New size:"<<m.size()<<endl;
    for(auto i:m){
        cout <<i.first<<" "<<i.second <<endl;
    }

    map<string,int> :: iterator it=m.begin();
    while(it!=m.end()){
        cout <<it->first<<" "<<it->second<<endl;
        it++;
    }



}