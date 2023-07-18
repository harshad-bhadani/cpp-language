
#include <iostream>
using namespace std;


class test
{

private:
    int testcode, nocandidate, centerreqd;
    string dsp;

    float calcntr()
    {
        return nocandidate / 100 + 1;
    }

public:
    void schedule()
    {
        cout << "Enter the testcode:";
        cin >> testcode;
        cout << "Enter the number of candidate:";
        cin >> nocandidate;
        cout << "Enter the description:";
        cin >> dsp;

        centerreqd = calcntr();
    }
    void disptest()
    {
        cout << "Testcode:" << testcode << endl;
        cout << "Description:" << dsp << endl;
        cout << "no. of candidates:" << nocandidate << endl;
        cout << "Number of Center:" << centerreqd << endl;
    }
};

int main()
{
    test t;
    t.schedule();
    t.disptest();
}