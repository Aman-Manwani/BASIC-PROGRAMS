#include<iostream>
using namespace std;
int maxim(int x=0,int y=0,int z=0)
{
    return x>y&&x>z?x:y>z?y:z;
}
int main ()
{
    int a=87,b=67,c=27;
    cout<<"maximum="<<maxim(10)<<endl;
    cout<<"maximum="<<maxim(23,46)<<endl;
    cout<<"maximum="<<maxim(24,67,14)<<endl;
    cout<<"maximum="<<maxim(a,b,c)<<endl;
    return 0;
}
