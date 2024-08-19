/*Write a C++ program that declares arrays of sizes 21, 3, and 15, initializes specific elements, prints a value from the second array, and uses a loop to output the first 4 elements of the third array.*/

#include<iostream>
using namespace std;
int main()
{
 int number[21];
int second[3]={3,7,11};
cout<<"value of 2 index is"<<second[2]<<endl;
int third[15]={2,7};
int i=3;
cout<<"printing the array"<<endl;
for(int i=0;i<=3;i++)
{
    cout<<third[i]<<" ";
}

}
