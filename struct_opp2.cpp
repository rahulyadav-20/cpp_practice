#include<iostream>
#include<string.h>
using namespace std;

struct student
{
    char name[20];
    int age;
    float marks;

    void print(){
        cout <<"Name: "<< name<<", ";
        cout << "Age:" << age <<", ";
        cout << "Marks:"<<marks <<endl;
    }
    void input(){
        cout << "Enter the name,age and marks"<<endl;
        cin.ignore();
        cin.getline(name,20);
        cin >> age;
        cin >>marks;

    }
};
int main(){
    student s1,s3;
    student s2;
    s1.input();
    s1.print();
    s2.input();
    s2.print();
    s3.input();
    s3.print();
}
