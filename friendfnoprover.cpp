// friend function using oparetor overloading
#include<iostream>
using namespace std;
class rect{
    int l,b;
    public:
    void setdata(int,int);
    int getarea()
    {
        return l*b;

    }
    friend rect operator+(rect p,rect q)        // binary operator
    {
        rect t;
        t.l=p.l+q.l;
        t.b=p.b+q.b;
        return t;

    }
    friend rect operator++(rect p)          // unary operator
    {
        rect t;
        t.l=++p.l;
        t.b=++p.b;
        return t;
    }

};
void rect :: setdata(int x,int y)
{
    l=x,b=y;
}
int main()
{
    rect r,a,c,d;
    r.setdata(4,3);
    cout<<"Area of rectangle is:"<<r.getarea()<<endl;
    a.setdata(5,6);
    cout<<"Area of rectangle is:"<<a.getarea()<<endl;

    c=r+a;
     cout<<"Area of rectangle is:"<<c.getarea()<<endl;

     d=++c;
      cout<<"Area of rectangle is:"<<d.getarea()<<endl;
     

    

}
