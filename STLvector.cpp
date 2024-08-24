#include<iostream>
#include<vector>
using namespace std; 
int main(){
    vector<int> v;

    vector<int> a(5,1);  // {0,0,0,0,0}
    cout<<"print a"<<endl;
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;

    vector<int> last(a);
    cout<<"print last"<<endl;
    for(int i:last){
        cout<<i<<" ";
    }cout<<endl;


    cout<<"capacity of vector->"<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"capacity of vector->"<<v.capacity()<<endl;

    v.push_back(52);
    cout<<"capacity of vector->"<<v.capacity()<<endl;

    v.push_back(65);
    cout<<"capacity of vector->"<<v.capacity()<<endl;

    v.push_back(10);
    cout<<"capacity of vector->"<<v.capacity()<<endl;

    v.push_back(100);
    cout<<"capacity of vector->"<<v.capacity()<<endl;


    cout<<"Element at 2nd index->"<<v.at(2)<<endl;

    cout<<"Front->"<<v.front()<<endl;
    cout<<"end->"<<v.back()<<endl;


    cout<<"Befor pop"<<endl;

    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    
    v.pop_back();
    cout<<"After pop"<<endl;
    for(int i:v){
        cout<<i<<" ";

    }cout<<endl;



    vector<int> vec;

    vec.clear();// erase all element at once {}

    vector<int> vec1(4,0);
    vector<int> vec2(4,10);
    // copy entire vector vec2 to vec3 and vec4
    vector<int> vec3(vec2.begin(),vec2.end());
    vector<int> vec4(vec2);

    vec2.push_back(6);
    vec2.emplace_back(7); //slight faster than push_back()
    vector<int> vec5(vec2.begin(),vec2.begin()+5);


    //lower bound , upper bound
    //swap (vec2,vec5);
    //begin(), end(), rbegin(), rend()


}