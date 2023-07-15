#include<iostream>
using namespace std;
int main()
{
    int i,j,di=0;
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<<a[i][j];
        }
        cout<<"\n";
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i==j)
            {
                di=di+a[i][j];
            }
        }
    }
    cout<<"\nsum of diagonal:"<<di;
    
}