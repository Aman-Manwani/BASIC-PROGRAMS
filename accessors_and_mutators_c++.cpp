#include<iostream>
using namespace std;
class rectangle
{
    private:
    int length;
    int breadth;
    public:
    void setlength(int leng)
    {
        if(leng<0)
        cout<<"breadth cannot be negative";
        else
        length=leng;
    }
    void setbreadth(int bread)
    {
        if(bread<0)
        cout<<"breadth cannot be negative";
        else
        breadth=bread;
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
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};
int main()
{
    int l,b;
    cout<<"enter length=";
    cin>>l;
    cout<<"enter breadth=";
    cin>>b;
    rectangle r1;
    r1.setlength(l);
    r1.setbreadth(b);
    cout<<"\narea="<<r1.area();
    return 0;
}