#include<iostream>
using namespace std;
int main()
{
    int a,b,d=1;
    char c=65,k;
    for(a=1; a<=5; a++)
    {
        for(b=1; b<=a; b++)
        {
            if(d%2==0)
            {
                k=c+32;
            cout<<k;
            }
            else{
            
                cout<<c;
            }
            c++;
        }
        d++;
        cout<<"\n";
    }
}