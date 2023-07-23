#include <iostream>
#include<string.h>
using namespace std;
int main()
{
    int i, j;
    char a[50], b[50];

    cout << "Enter the name:";
    cin >> a;

    cout << "Enter the surname:";
    cin >> b;

    for (i = 0; a[i] != '\0'; i++)
    {
    }
    a[i]=' ';
    i++;
       for (j = 0; b[j] != '\0'; j++)
    {
        a[i] = b[j];
        i++;
    }
    a[i]='\0';
    cout<<"\nfull name:"<<a;
}