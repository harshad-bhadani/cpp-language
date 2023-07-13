#include<iostream>
using namespace std;

int main()
{
    char i,a;
    for(i=65; i<=90; i++)
    {
        if(i%2!=0)
        {
        cout<<i<<"\t";
        }
        else
        if(i+=2)
        {
            a=i+31;
            cout<<a<<"\t";
        }

    }
}
