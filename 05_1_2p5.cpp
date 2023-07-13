#include<iostream>
using namespace std;

int main()
{
    float i,n,a=1;
    cout<<"Enter the number:";
    cin>>n;
    for(i=1; i<=n; i+=2)
    {
        cout<<i-0.5<<"\t";
        cout<<a<<"\t";
        a+=4;
    }
}
