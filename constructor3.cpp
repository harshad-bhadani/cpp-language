#include <iostream>
using namespace std;
class member
{

    int flyno;
    char desti[100];
    float distance, fuel;

public:
    member()
    {
        cout << "Enter the Flight Number:";
        cin >> flyno;
        cout << "Enter the Destination:";
        cin >> desti;
        cout << "Enter the Distance:";
        cin >> distance;

        if (distance <= 1000)
        {
            fuel = 500;
        }
        else if (distance > 1000 && distance <= 2000)
        {
            fuel = 1100;
        }
        else if (distance > 2000)
        {
            fuel = 2200;
        }
    }

    void showinfo()
    {
        cout << "Flight Number:" << flyno << endl;
        cout << "Destination:" << desti << endl;
        cout << "Distance:" << distance << endl;
        cout << "Fuel Required:" << fuel << endl;
    }
};

int main()
{
    member m;
    m.showinfo();
}