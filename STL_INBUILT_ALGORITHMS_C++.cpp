#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int min =*min_element(v.begin(),v.end());
    cout<<"minimum element="<<min<<endl;
    int max=*max_element(v.begin(),v.end());
    cout<<"maximum element="<<max<<endl;
    int sum=accumulate(v.begin(),v.end(),0);
    cout<<"sum="<<sum<<endl;
    int ct=count(v.begin(),v.end(),34);
    cout<<"count of 34 is"<<ct<<endl;
    auto it=find(v.begin(),v.end(),34);
    if(it!=v.end())
    {
        cout<<*it<<endl;
    }
    else
    cout<<"element not found"<<endl;
    reverse(v.begin(),v.end());
    for(auto value : v)
    {
        cout<<value<<" ";
    }
    cout<<endl;
    int key;
    cin>>key;
    bool present=binary_search(v.begin(),v.end(),key);
    if(present)
    {
        cout<<" absent";
    }else{
        cout<<"present ";
    }
    cout<<endl;
    vector<int>v={1,2,3,4,5,6,7,8};
    rotate(v.begin(),v.begin()+5,v.end());
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    //basically gives the next greatest number very useful concept//
    cout<<endl;
    vector<int>v={1,2,3};
    next_permutation(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    next_permutation(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
