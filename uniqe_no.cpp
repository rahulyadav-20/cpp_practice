.#include<iostream>
using namespace std;
int main(){
    int arr[9]={1,2,4,4,5,1,5,3,2};
    int ar;
    for(int i=0; i<9; i++){
        ar=ar^arr[i]; //XOR with all elements
    }
    cout<<"uniqe no:"<<ar<<endl;

}