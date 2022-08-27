#include <iostream>
using namespace std;
class employee
{
    private:
    int id;
    int name;
    public:
    employee(int a,string b)
    {
        id=a;
        name=b;
    }
    int getid()
    {
        return id;
    }
    string getname()
    {
        return name;
    }
}
class dailyemployee:public employee
{
    private:
    int salary;
    public:
    void setsalary(in)
    {
        
    }
}
int main()
{
    cout<<"Hello World";

    return 0;
}
