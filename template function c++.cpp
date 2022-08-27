#include<iostream>
using namespace std;
template<class aman>
aman maxim(aman x,aman y)
{
    return x>y?x:y;
}
int main ()
{
    int a=14,b=12;
    cout<<"maximum="<<maxim(a,b)<<endl;
    cout<<"maximum2="<<maxim(12.6,54.2);
    return 0;
}