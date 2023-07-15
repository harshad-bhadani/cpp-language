#include<iostream>
using namespace std;
int main()
{
    int i,j,a[3][3]={1,2,3,4,5,6,7,8,9};
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(a[i][j]!=4 && a[i][j]!=9)
            {
                cout<<a[i][j];
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}