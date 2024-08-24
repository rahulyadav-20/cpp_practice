#include<iostream>
using namespace std;
int main()
{
    int row,col,n;
    cin>>col>>row;
    for (int i=1; i<=col; ++i)
    {
        for (int j=1; j<=row; ++j)    //RECTANGUAL PATTEN
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}
