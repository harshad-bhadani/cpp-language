#include<iostream>
using namespace std;
int main()
{
    int a,b,c=1,d;
    for(a=1;a<=5; a++)
    {
        for(b=1; b<=a; b++)
        {
        d=(c%2==1);
        cout<<d;
        c++;
        }
        cout<<"\n";
    }
    
}