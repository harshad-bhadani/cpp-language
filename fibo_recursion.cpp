#include<iostream>
using namespace std;
int fi(int n)
{
    if(n==0)
    {
        return 0;
    }else
    if(n==1)
    {
        return 1;
    }
    else
    {
        return fi(n-1)+fi(n-2);
    }
}
int main()
{
    int n;

    cout<<"Enter the number:";
    cin>>n;

    for(int i=0; i<=n; i++)
    {
        cout<<fi(i);
        cout<<"\n";
    }
}