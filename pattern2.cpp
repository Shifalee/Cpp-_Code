//Write a C++ program that takes an integer input n and prints an n x n square pattern where each row contains the row number repeated n times using nested while loops.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}