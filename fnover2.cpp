#include<iostream>
using namespace std;
class vol{

    public:
    int cal(int l)
    {
    
        return l*l*l;

    }
    double cal(double r)
    {
        return (4/3)*3.14*r*r*r;
    }
    double cal(float r, float l)
    {
        return 3.14*r*l;
    }
    float cal(int l,int b, int h)
    {
        return l*b*h;
    }

};
int main()
{
    vol v;
     cout<<"Volume of cube:"<<v.cal(5)<<endl;
      cout<<"Volume of sphere:"<<v.cal(2.5)<<endl;
       cout<<"Volume of cone:"<<v.cal(2.5,2.5)<<endl;
        cout<<"Volume of rectangle:"<<v.cal(2,3,1)<<endl;
}