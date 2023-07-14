#include<iostream>
using namespace std;
int main()
{
    int a,b,k=1;
    for(a=1; a<=5; a++)
    {
        for(b=1;b<=a; b++)
        {
            cout<<k;
            k++;

        }
        cout<<"\n";
    }
}