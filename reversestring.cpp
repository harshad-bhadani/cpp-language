#include<iostream>
using namespace std;
int main()
{
    int i,j,k=0;
    char a[30],b[50];

    cout<<"enter the name:";
    cin>>a;

    for(i=0; a[i]!='\0'; i++)
    {}
    for(j=i-1; j>=0; j--)
    {
        b[k]=a[j];
        k++;
    }
    b[k]='\0';
    cout<<"reverse string:"<<b;
}