#include <iostream>
using namespace std;
class minmax
{
    int a, b;

public:
    void setdata()
    {
        cout << "Enter the values a:\n";
        cin >> a;
        cout << "Enter the values b:";
        cin >> b;
    }
    friend minmax value(minmax m);
};
minmax value(minmax m)
{
    if (m.a > m.b)
    {
        cout << "Biggest is:" << m.a;
    }
    else
    {
        cout << "Biggest is:" << m.b;
    }
}

int main()
{
    minmax m;
    m.setdata();
    value(m);
}