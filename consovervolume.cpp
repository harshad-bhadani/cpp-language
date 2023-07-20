#include<iostream>
using namespace std;
class vol{

    public:
    vol()
    {
        int l=10;
        cout<<"Volume of cube:"<<l*l*l<<endl;

    }
    vol(float r)
    {
        cout<<"Volume of sphere:"<<(4/3)*3.14*r*r*r<<endl;
    }
    vol(float r, float l)
    {
        cout<<"Volume of cone:"<<3.14*r*l<<endl;
    }
    vol(int l,int b, int h)
    {
        cout<<"Volume of rectangle:"<<l*b*h<<endl;
    }

};
int main()
{
    vol v,a(2.0),b(2.0,2.0),c(2.0,2.0,2.0);
}