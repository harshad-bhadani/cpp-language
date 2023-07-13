#include<iostream>
using namespace std;
int main()
{
    float a,t;
    cout<<"enter income:";
    cin>>a;
    
    if(a<=2500)
    {
        t=0;
        cout<<"tax:"<<t;
    }
    else
    if(a>=2500 && a<=5000)
    {
        t=(a-2500)*0.10;
        cout<<"tax:"<<t;
    }
    else
    if(a>=5000 && a<=10000)
    {
        t=250+(a-5000)*0.20;
        cout<<"tax:"<<t;
    }
    else
    if(a>=10000)
    {
        t=250+1000+(a-10000)*0.30;
        cout<<"tax:"<<t;
    }
}