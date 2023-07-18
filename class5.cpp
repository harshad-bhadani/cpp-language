#include<iostream>
using namespace std;
class book{
    private:
    int bookno;
    char booktitle[20];
    float price;

    float total_cost(int n)
    {
        return price*n;
    }

    public:
    void input()
    {
        cout<<"enter the book  number:";
        cin>>bookno;
        cout<<"enter the book title:";
        cin>>booktitle;
        cout<<"enter the price:";
        cin>>price;
        
    }

    void purchase()
    {
        int n;
        cout<<"Enter the number of copies:";
        cin>>n;
        float totalcost;
        totalcost=total_cost(n);

        cout<<"total cost:"<<totalcost;
    }
};

int main()
{
    book b;
    b.input();
    b.purchase();
}