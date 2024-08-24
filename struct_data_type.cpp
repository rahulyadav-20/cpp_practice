#include<bits/stdc++.h>
using namespace std;
namespace rahul{
    int val=30;
    int get(int val){
        return val*10;
    }

}
struct  node {
    string str;
    int num;
    double doub;
    char x;

   /* node(string str_ ,int num_ ,double doub_, char x_){
        str=str_;
        num=num_;
        doub=doub_;
        x=x_;
    }*/

};


int main(){
    double val=10.145;
    cout << val<<endl;           // print 10.145
    cout <<rahul::val<<endl;     //print 30
    cout <<rahul:: get(5)<<endl; //print 50


    //creating a data type where you store
    //  {string , int, double, char}


    //worng way 
    node rah;
    rah.str="Rahul";
    rah.num=21;
    rah.doub=65.25;
    rah.x='R';

  // node a=new node("tami", 43, 45.65, 'R');




}