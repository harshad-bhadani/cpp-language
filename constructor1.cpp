#include<iostream>
using namespace std;

class marksheet{

    int p,c,m,total;
    float pr;

    public:
    marksheet()
    {
        
        cout<<"Enter the physics marks:";
        cin>>p;
        cout<<"Enter the maths marks:";
        cin>>m;
        cout<<"Enter the chemistry marks:";
        cin>>c;
        total=p+c+m;
        pr=(total*100)/300;
    }
    void display()
    {
        cout<<"physic:"<<p<<endl;
        cout<<"chemistry:"<<c<<endl;
        cout<<"maths:"<<m<<endl;
        cout<<"Total:"<<total<<endl;
        cout<<"percentage:"<<pr<<endl;

    }
};
int main()
{
    marksheet m;
    m.display();


}
/*
Automatic initialization of objects at the time of their declaration.
Multiple ways to initialize objects according to the number of arguments passes while declaration.
The objects of the child class can be initialized by the constructors of the base class.

Limitation of constructor:
A constructor function may not be static
Constructor can not be made virtual
It can’t be inherited
Name of the constructor function must be same as that of the class

*/