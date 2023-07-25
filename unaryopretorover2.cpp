#include <iostream>
using namespace std;

class box
{
    int l, b, h;

public:
    void setdata(int x, int y, int z)
    {
        l = x, b = y, h = z;
    }
    int getdata()
    {
        return l * b * h;
    }
    box operator--(int)
    {
        box t;
        t.l = l--;
        t.b = b--;
        t.h = h--;
        return t;
    }
};
int main()
{
    box a, b;
    a.setdata(2, 3, 4);
    cout << "Volume of box a:" << a.getdata() << endl;

    a--; // 1 2 3
    b=a;
    cout << "Volume of box b:" << b.getdata() << endl;
}
