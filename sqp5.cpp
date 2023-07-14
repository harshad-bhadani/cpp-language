#include<iostream>
using namespace std;
int main()
{
    int a,b,k=11;
    for(a=1;a<=5; a++)
    {
        for(b=1; b<=5; b++)
        {
            cout<<k;
            k++;
        }
        cout<<"\n";
        k+=5;
    }
}