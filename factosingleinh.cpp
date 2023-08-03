#include<iostream>
using namespace std;

class base
{
    public:
    int n,ans=1;
    void factorial()
    {
        cout<<"Enter the value:";
        cin>>n;
    }
};

class derived : public base
{
    public:
    void display()
    {
        for(int i=n; i>=1; i--)
        {
            cout<<"\t"<<i;
            ans=ans*i;

        }
        cout<<"ans:"<<ans<<endl;
    }
};
int main()
{
    derived d;
    d.factorial();
    d.display();
}
