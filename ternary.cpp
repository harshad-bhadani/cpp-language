#include<iostream>
using namespace std;
int main()
{
    int a,b,c,large;
    cout<<"enter a:";
    cin>>a;
    cout<<"enter b:";
    cin>>b;
    cout<<"enter c:";
    cin>>c;

    large=a>b?a>c?a:c:b>c?b:c;
    cout<<"large no.:"<<large;

}