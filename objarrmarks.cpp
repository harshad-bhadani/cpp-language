#include <iostream>
using namespace std;

class marks
{
    int p, c, m;

public:
    void setdata()
    {
        cout << "Enter p:";
        cin >> p;
        cout << "Enter c:";
        cin >> c;
        cout << "Enter m:";
        cin >> m;
    }
    void getdata()
    {
        cout << "Total:" << p + c + m << endl;
    }
}; 
int main()
{

    marks a[3];

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the marks of student " << i + 1 << endl;
        a[i].setdata();
    }

    for (int i = 0; i < 3; i++)
    {

        a[i].getdata();
    }
}