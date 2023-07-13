#include<iostream>
using namespace std;
int main()
{
    float a,b,t;
    char op;
    cout<<"enter opretor:";
    cin>>op;
    cout<<"enter a:";
    cin>>a;
    cout<<"enter b:";
    cin>>b;

    switch(op) 
    {
        case '+':
        t=a+b;
        cout<<t;
        break;

        case '-':
        t=a-b;
        cout<<t;
        break;

        case '*':
        t=a*b;
        cout<<t;
        break;

        case '/':
        t=a/b;
        cout<<t;
        break;

        default:
        cout<<"enter the valid opretor!";
    }

}