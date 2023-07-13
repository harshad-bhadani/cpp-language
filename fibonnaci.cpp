#include<iostream>
using namespace std;

int main()
{
    int i,n1=-1,n2=1,n3,n;
    cout<<"Enter the number:";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        n3=n1+n2;
        cout<<n3<<"\t";
        n1=n2;
        n2=n3;
    }
}
