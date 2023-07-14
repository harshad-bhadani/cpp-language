#include<iostream>
using namespace std;
int main()
{
    int a[12],even=0,odd=0;
    for(int i=0; i<12; i++)
    {
        cout<<"Enter the value";
        cin>>a[i];
    }
    for(int i=0; i<12; i++)
    {
        if(i%2==0)
        {
            even=even+a[i];
            cout<<"\n"<<a[i];
        }
        else
        {
            odd=odd+a[i];
            cout<<a[i];
        }
    }
    cout<<"\neven total:"<<even;
    cout<<"\nodd total:"<<odd;
}