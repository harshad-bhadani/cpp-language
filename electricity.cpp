#include<iostream>
using namespace std;
int main()
{
    float u,rupees;
    cout<<"enter u:";
    cin>>u;
    
    if(u<=200)
    {
        rupees=((u*60)/100)+50;
        cout<<"charge:"<<rupees;
    }
    else
    if(u<=300)
    {
        rupees=((u*80)/100)+50;
        cout<<"charge:"<<rupees;
    }
    else
    if(u>300)
    {
        rupees=((u*90)/100)+50;
        cout<<"charge:"<<rupees;
    }
    if(rupees>300)
    {
        cout<<"total amount:"<<rupees+(rupees*15/100);
    }
    else
    {
        cout<<"\ntotal amount:"<<rupees;
    }


}