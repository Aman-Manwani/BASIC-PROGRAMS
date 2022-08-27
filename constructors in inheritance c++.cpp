#include <iostream>
using namespace std;
class vasu
{
    public:
    vasu()
    {
        cout<<"vasu is a bitch\n";
    }
    vasu(int x)
    {
        cout<<"vasu is lol guy\n"<<x<<endl;
    }
};
class aman:public vasu
{
    public:
    aman()
    {
        cout<<"aman is good looking and also a hardworking boy\n";
    }
    aman(int y)
    {
        cout<<"i dont want my praise from my own mouth\n"<<y;
    }
    aman(int x,int y):vasu(x)
    {
        cout<<"well, i am AMAN MANWANI\n"<<y; 
    }
};
int main()
{
    aman r(23,46);
    return 0;
}