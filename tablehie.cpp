#include<iostream>
using namespace std;
class base{

    public:
    int n;
    void setN() 
    {
        cout<<"Enter the number:";
        cin>>n;
    }

};

class derived1 : public base
{
    public:
    void table()
    {
        for (int i=1; i<=10; i++)
        {
            cout<<n<<" * "<<i<<" = "<<n*i<<endl;
        }
    }
};
class derived2 : public base
{
    public:
    void reverse()
    {
        for (int i=n; i>=1; i--)
        {
            cout<<i<<" ";
        }
    }
};
int main()
{
    derived1 d1;
    d1.setN();
    d1.table();
    
    derived2 d2;
    d2.setN();
    d2.reverse();
}