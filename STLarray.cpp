#include<iostream>
#include<array>
#include<iterator>
using namespace std;
    // max size of array in main function 10^6 ---> int, double, char
    int simple_array[4]={1,2,3,4};

int main(){
    // max size of array in main function 10^6 ---> int, double, char
    int simple_arr[4]={1,2,3,4};
    array<int,4> a={1,2,3,4};

    array<int,4> arr={1}; //->  {1,0,0,0}

    array <int ,5> nums;
    nums.fill(10);


    for(int i=0; i<nums.size(); i++){
        cout << nums.at(i)<<" ";
    }
    cout <<endl;

    int size=a.size();
    cout<<"Size of array:"<<size<<endl;

    for(int i=0; i<size; i++){
        cout<<a[i]<<" ";
    }
    cout <<endl;
    cout<<"Element at 2nd index->"<<a.at(2)<<endl;   // print 3             
    cout<<"Empty or not->"<<a.empty()<<endl;         // print false
    cout<<"First Element->"<<a.front()<<endl;        // print 1         a.at(0);
    cout<<"First Element->"<<a.back()<<endl;          // print 4        a.at(a.size()-1);



    //iterators
    // begin(), end(), rbegin(), rend();

    array<int,5> arr1={1,2,3,4,5};
    

    //forword traversal
    for(auto it=arr1.begin(); it!=arr1.end(); it++){
        cout <<*it<<" ";
    }
    cout <<endl;

    //backword traversal
    for(auto it= arr1.rbegin(); it!=arr1.rend(); it++){
        cout <<*it<<" ";
    }
    cout <<endl;
    // 2nd method for Baackword traversal
    for(auto it=arr1.end()-1; it>=arr1.begin(); it--){
        cout <<*it<<" ";
    }
    cout <<endl;
    // for each loop
    for(auto it:arr1){
        cout<<it<<" ";
    }
    cout <<endl;

}