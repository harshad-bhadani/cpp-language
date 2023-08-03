#include<iostream>
using namespace std;

class box{

    double l,b,h;
    public:
    void setdata(int x, int y,int z)
    {
        l=x,b=y,h=z;

    }
    double getdata()
    {
        return l*b*h;

    }
     box operator/ (box &n)
    {
        box t;
        n.l=l / n.l;
        n.b=b/n.b;
        n.h=h/n.h;

        return t;
    }
};
int main()
{
    box a,b,c;
    a.setdata(4,6,12);
    cout<<"Volume of box a:"<<a.getdata()<<endl;
    b.setdata(2,3,4);
    cout<<"Volume of box b:"<<b.getdata()<<endl;

    c= a/b;
    cout<<"Volume of box c:"<<c.getdata()<<endl;




}