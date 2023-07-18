#include<iostream>
using namespace std;

class batsman
{
    private:
    int bcode,inn,notout,runs;
    char bname[20];
    float batavg;

    float calcavg()
    {
        return runs/(inn-notout);
    }

    public:
    void readdata()
    {
        cout<<"Enter the bcode:\n";
        cin>>bcode;
        cout<<"Enter the name:\n";
        cin>>bname;
        cout<<"Enter the innings:\n";
        cin>>inn;
        cout<<"Enter the notout:\n";
        cin>>notout;
        cout<<"Enter the runs:\n";
        cin>>runs;
        

        batavg = calcavg();
    }
    
    void displaydata()
    {
        cout<<"bcode:"<<bcode<<endl;
         cout<<"name:"<<bname<<endl;
          cout<<"innings:"<<inn<<endl;
           cout<<"notout:"<<notout<<endl;
           cout<<"batavg:"<<batavg<<endl;
    }
};

int main()
{
    batsman b;
    b.readdata();
    b.displaydata();
}