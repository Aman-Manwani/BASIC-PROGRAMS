#include<iostream>
using namespace std;
class rectangle
{
    private:
    int length;
    int breadth;
    public:
    rectangle(int l=1,int b=1)
    {
        setlength(l);
        setbreadth(b);
    }
    rectangle(rectangle &rect)
    {
        length=rect.length;
        breadth=rect.breadth;
    }
    void setlength(int leng)
    {
        if(leng<0)
        cout<<"length cannot be negative";
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
    rectangle r1(l,b);
    rectangle r2(r1);
    cout<<"\narea="<<r2.area();
    return 0;
}
