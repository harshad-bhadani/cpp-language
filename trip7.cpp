#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char c=65,k;
    for(a=1; a<=5;a++)
    {
        for(b=1; b<=a; b++)
        {
            if(b%2==1)
            {
                k=c+32;
                cout<<k;
            }
            else{
                cout<<c;
            }
            c++;
        }
        cout<<"\n";
    }
}