#include<iostream>
using namespace std;
class report{
    int adno;
    char name[20];
    float marks[5],avg,sum=0;

public:

        void readinfo()
        {
                cout<<"Enter the admin  number:";
                cin>>adno;
                cout<<"Enter the name:";
                cin>>name;
                cout<<"Enter the marks:";
                for(int i=0; i<5; i++)
                {
                    cin>>marks[i];
                    sum=sum+marks[i];
                }
                avg=sum/5;
        }

        void displayinfo()
        {
            cout<<"Admin number:"<<adno<<endl;
            cout<<"name:"<<name<<endl;
            cout<<"total marks:"<<sum<<endl; 
            cout<<"average:"<<avg<<endl;

        }
};

int main()
{
    report r;
    r.readinfo();
    r.displayinfo();

}
