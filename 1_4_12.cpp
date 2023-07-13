#include<iostream>
using namespace std;

int main()
{
    int i,n,a=1;
    cout<<"Enter the number:";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cout<<i*a<<"\t";
        a=a*2;
    }
}
