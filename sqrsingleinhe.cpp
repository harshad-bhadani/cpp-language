#include<iostream>
using namespace std;

class base
{
    public:
    int n;
    void square()
    {
        cout<<"Enter the value:";
        cin>>n;
    }
};

class derived : public base
{
    public:
    void ans()
    {
        for(int i=1; i<=n; i++)
        {
            cout<<"\t"<<i*i;
        }
    }
};
int main()
{
    derived d;
    d.square();
    d.ans();
}
