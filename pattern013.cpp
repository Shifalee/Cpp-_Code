#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    int row=1;
    while(row<=n)
    {
        int col=1;
        while(col<=n)
        {
            char value='A';
            cout<<value;
            value=value+1;
            col=col+1;

        }
        cout<<endl;
        row=row+1;
    }
}