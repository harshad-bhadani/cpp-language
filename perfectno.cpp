#include <iostream>
using namespace std;
int pr()
{
    int i, num, sum = 0;

    cout << "Enter the number:";
    cin >> num;

    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << i;
            sum = sum + i;
        }
    }
    if (sum == num)
    {
        cout << "\nperfect number";
    }
    else
    {
        cout << "\nnon-perfect number";
    }
}

int main()
{
    pr();
}