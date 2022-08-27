#include <iostream>
using namespace std;
class base
{
    public:
    void fun1()
    {
        cout<<"yaar jigree kasooti degree";
    }
};    
class derived:public base
{
    public:
    void fun2()
    {
        cout<<"family man season 2";
    }
};
int main()
{
    derived d;
    base *p=&d;
    p->fun1();
    //p->fun2();   here we cannot able to print this function as it is not in base class
    //through pointer we can print only function that are in base class 
    return 0;
}
