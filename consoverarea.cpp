#include<iostream>
using namespace std;
class area
{
    public:

    area()
    {
        int l=5;
        cout<<"Area of square:"<<l*l<<endl;
    }
    area(float r)
    {
        cout<<"Area of circle:"<<3.14*r*r<<endl;
    }
    area(int a,int b)
    {
        cout<<"Area of rectangle:"<<a*b<<endl;
    }
    area(double b,double h)
    {
        cout<<"Area of the triangle:"<<b*h*0.5<<endl;
    }
};
int main()
{
    area a,b(5),c(5,5),d(2.0,2.0);
}
