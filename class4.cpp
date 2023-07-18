#include <iostream>
using namespace std;
class member
{

private:
    int flyno;
    char desti[100];
    float distance, fuel;

    float calfuel()
    {
        if (distance <= 1000)
        {
            return fuel = 500;
        }
        else
        if (distance > 1000 && distance <= 2000)
        {
            return fuel = 1100;
        }
        else
        if (distance > 2000)
        {
            return fuel = 2200;
        }
    }

public:

        void feedinfo()
        {
            cout<<"Enter the Flight Number:";
            cin>>flyno;
            cout<<"Enter the Destination:";
            cin>>desti;
            cout<<"Enter the Distance:";
            cin>>distance;

            fuel=calfuel();
        }

        void showinfo()
        {
            cout<<"Flight Number:"<<flyno<<endl;
            cout<<"Destination:"<<desti<<endl;
            cout<<"Distance:"<<distance<<endl;
            cout<<"Fuel Required:"<<fuel<<endl;
        }
};

int main()
{
    member m;
    m.feedinfo();
    m.showinfo();
}