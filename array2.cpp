/*Write a C++ program that reads an integer size, declares an array of size 100, and prints the value of the second element (num[1]) repeatedly for the specified number of times.*/
#include<iostream>
using namespace std;
int main(){
    int size;
    cin>>size;
    int num[100];
    for(int i=0;i<size;i++)
    {
        cout<<num[1];
    }

}