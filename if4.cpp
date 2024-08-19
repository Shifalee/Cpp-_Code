#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the Character";
    cin>>ch;
    if(ch>=65 && ch<=90){
        cout<<ch<<"this is upper case"<<endl;
        }
    else if(ch>=48 && ch>=57)
    {
        cout<<ch<<"this is numeric"<<endl;
    }
    else if(ch>=97 && ch<=122)
    {
         cout<<ch<<"this is lower case"<<endl;
    }
    else{
        cout<<"invalid input"<<endl;
    }
}
