#include <iostream>
using namespace std;
class rectangle
{
    private:
    int length;
    int breadth;
    public:
    rectangle(int l=0,int b=0)
    {
        setlength(l);
        setbreadth(b);
    }
    void setlength(int l)
    {
        if(l>0)
        length=l;
        else
        length=0;
    }
    void setbreadth(int b)
    {
        if(b>0)
        breadth=b;
        else
        breadth=0;
    }
    int getlength()
    {
        return length;
    }
    int getbreadth()
    {
        return breadth;
    }
    int area()
    {
        return getlength()*getbreadth();
    }
};
class cuboid:public rectangle
{
    private:
    int height;
    public:
    cuboid(int h=0)
    {
        setheight(h);
    }
    void setheight(int h)
    {
        if(h>0)
        height=h;
        else
        height=0;
    }
    int getheight()
    {
        return height;
    }
    int volume()
    {
        return height*getlength()*getbreadth();
    }
};
int main()
{
    int l,b,h;
    cout<<"enter length, breadth and height respectively=";
    cin>>l>>b>>h;
    cuboid c1(h);
    c1.setlength(l);
    c1.setbreadth(b);
    cout<<"volume of above cuboid="<<c1.volume();
    return 0;
}
