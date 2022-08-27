#include<iostream>
using namespace std;
class rectangle
{
    public:
    int length;
    int breadth;
    int area()
    {
        int area;
        area=length*breadth;
        return area;
    }
    int perimeter()
    {
        int perimeter;
        perimeter=2*(length+breadth);
        return perimeter;
    }
};
int main()
{
    rectangle r1,r2;
    cout<<"enter length of first rectangle=";
    cin>>r1.length;
    cout<<"enter breadth of first rectangle=";
    cin>>r1.breadth;
    cout<<"area of first rectangle="<<r1.area()<<endl;
    cout<<"enter length of second rectangle=";
    cin>>r2.length;
    cout<<"enter breadth of second rectangle=";
    cin>>r2.breadth;
    cout<<"area of second rectangle="<<r2.area();
    cout<<"\nperimeter of second rectangle="<<r2.perimeter();
    return 0;
}
