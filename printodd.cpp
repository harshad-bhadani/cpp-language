#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cout<<"Enter the number:";
    cin>>n;

    for(i=1; i<=n; i+=2)
    {
        cout<<i<<"\t";
    }
}