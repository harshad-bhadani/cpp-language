#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char k;
    for(a=0; a<=4; a++)
    {
        for(b=a; b>=0; b--)
        {
            k=b+65;
            cout<<k;
        }
        cout<<"\n";
    }
}