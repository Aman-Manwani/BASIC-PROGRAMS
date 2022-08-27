#include <iostream>
using namespace std;
class rectangle
{
    public:
    void area()
    {
        cout<<"area of the rectangle";
    }
};    
class cuboid:public rectangle
{
    public:
    void volume()
    {
        cout<<"volume of cuboid";
    }
};
int main()
{
    /*also we are not able to define pointerto derived classes i.e cuboid 
    e.g
    rectangle f;
    cuboid *p=&f;
    above is totally wrong because we should not store pointer of base class to derived class
    compiler shows error in this problem
    */
    cuboid d;
    rectangle *p=&d;
    p->area();
    //p->volume();   here we cannot able to print this function as it is not in base class
    //through pointer we can print only function that are in base class 
    return 0;
}
