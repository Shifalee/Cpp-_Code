#include<iostream>
using namespace std;
int main()
{
    int n,i=1,count=0;
    cout<<"enter the number"<<endl;
    cin>>n;
    while(i<=n)
    {
        if(n%i==0)
        {
            count++;
        }
        i++;
    }
    if(count==2)
    {
        cout<<"number is prime"<<endl;
    }
    else
    {
        cout<<"number is not prime"<<endl;
    }
}
