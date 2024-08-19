//Write a C++ program that takes an integer input n and prints an n x n square pattern of asterisks using nested while loops.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the numbers"<<endl;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

}