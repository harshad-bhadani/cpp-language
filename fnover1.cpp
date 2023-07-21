#include<iostream>
using namespace std;
class area
{
    public:

    int cal(int l)
    {
    
        return l*l;
    }
    float cal(double r)
    {
        return 3.14*r*r;
    }
     int cal(int a,int b)
    {
        return a*b;
    }
    double cal(double b,double h)
    {
        return 0.5*b*h;
    }
};
int main()
{
    area a;
     cout<<"Area of square:"<<a.cal(2)<<endl;
      cout<<"Area of circle:"<<a.cal(3.0)<<endl;
       cout<<"Area of rectangle:"<<a.cal(5,6)<<endl;
        cout<<"Area of triangle:"<<a.cal(2.0,2.0)<<endl;
}
/*
aritel =decode@9876
*/