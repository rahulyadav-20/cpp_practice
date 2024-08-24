#include<iostream>
#include<string.h>
using namespace std;
struct student
{
    int age;
    char name[20];
    float marks;
    
};
void print(struct student x){
    cout<<"Age: "<<x.age<<", ";
    cout<<"Name: "<<x.name<<", ";
    cout<<"Marks: "<<x.marks<<endl;
}

student input(){
    student x;
    cout << "Enter the Age, Name and Mark--->";
    cin >> x.age;
    cin.ignore();
    cin.getline(x.name,20);
    cin >> x.marks;
    return x;
}

int main(){
    student s1={20,"Rahul yadav",33.23};
    //print(s1);
    student s2;
    s2.age=13;
    strcpy(s2.name,"make over");
    s2.marks=38.55;
    //print(s2);
    student s3;
    cout <<"Enter you age,name and marks";
    cin >>s3.age;
    cin.ignore();
    cin.getline(s3.name,20);
    cin >> s3.marks;
    student s4;
    s4=input();
    print(s1);
    print(s2);
    print(s3);
    print(s4);

}
