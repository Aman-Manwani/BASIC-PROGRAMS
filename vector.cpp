#include<bits/stdc++.h>
using namespace std;
int main ()
{
    vector<int >v(5,0);
    //o(1) operation so we can use it anywhere
    v.push_back(3);
    //we get in vector as 0,0,0,0,0,3
    v.pop_back();
    //its also a o(1) operation and it removes the last element from vector
    
    //other importand stl operation is insert operation
    //in this we can insert in vector where we want to insert 
    v.insert(v.begin()+3,100);
    for(int x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    //we also can insert multiple elements in middle of array
    v.insert(v.begin()+2,3,24);
    for(int x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    //for erasing multiple elements from middle, we can use erase function 
    v.erase(v.begin()+2,v.begin()+5);
    for(int x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    // to resize the vector use the resize function,also next elements which are not initialised are 0 by default
    v.resize(12);
    for(int x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    //if you want to clear the whole vector just use clear function 
    v.clear();
    cout<<v.size()<<endl;
    //to chk whether the vector is empty or not, use the mpty function
    if(v.empty())
    {
        cout<<"this is an empty vector"<<endl;
    }
    v.push_back(3);
    v.push_back(4);
    v.push_back(7);
    v.push_back(5);
    v.push_back(9);
    v.push_back(12);
    //to get the front and back most element we can use front abd back function 
    cout<<v.front()<<"       "<<v.back()<<endl;
    //to reserve the capacity of a vector we use reserve function, because doubling the size of array is a very time consuming 
    v.reserve(100);
    cout<<v.capacity()<<endl;
    //reserve function fasten our code so where we are sure about capacity we must use it
    return 0;
}