#include <bits/stdc++.h>
using namespace std;
bool should_i_swap(pair<int,int>a,pair<int,int>b)
{
    if(a.first!=b.first)
    {
        if(a.first<b.first)
        {
            return false;
        }
        return true;
    }
    if(a.first=b.first)
    {
        if(a.second>b.second)
        {
            return false;
        }else
        return true;
    }
}
int main()
{
    int n;
    cout<<"enter number of elements=";
    cin>>n;
    vector <pair<int,int>>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end(),should_i_swap);
    for(int i=0;i<n;i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    return 0;
}
