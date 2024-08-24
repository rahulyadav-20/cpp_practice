// print the factorial number 
#include<iostream>
using namespace std;

void Factorial(int n){
    int fact=1;  // intial value of fact
    for (int i=1; i<=n; i++){ //itreation 1 to n
        fact=fact*i;  //Multiply the fact with i
        cout<<fact<<endl;
    }
    return ;

}


int main(){
    int n;
    cout<<"Enter the number = ";
    cin>>n;
    Factorial(n);
    return 0;
}