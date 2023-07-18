#include<iostream>
using namespace std;
class student{

    private:
    int adminno;
    char sname[20];
    float eng,maths,sci,total;
    float ctotal()
    {
        return eng+sci+maths;
    }

    public:
    void takedata()
    {
        cout<<"Enter the admin no.:";
        cin>>adminno;
        cout<<"Enter the name:";
        cin>>sname;
        cout<<"Enter the maths marks:";
        cin>>maths;
        cout<<"Enter the english marks:";
        cin>>eng;
        cout<<"Enter the science marks:";
        cin>>sci;

        total=ctotal();
    }
    void showdata()
    {
        cout<<"admin no.:"<<adminno<<endl;
        cout<<"name:"<<sname<<endl;
        cout<<"Maths marks:"<<maths<<endl;
        cout<<"Science marks:"<<sci<<endl;
        cout<<"English marks:"<<eng<<endl;
        cout<<"Total marks:"<<total<<endl;
    }
};

int main()
{
    student s;
    s.takedata();
    s.showdata();
}