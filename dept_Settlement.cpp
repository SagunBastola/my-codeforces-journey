#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  n;
    long long  d;
    cin>>n>>d;
    if(d == 0)
    {
        cout<<0;
        return 0;
    }
    map<pair<long long,long long>,long long > m;
    for(int i=0;i<d;i++)
    {
        long long  a,b,t;
        cin>>a>>b>>t;
        if(m.find({b,a}) != m.end())
        {
            m[{b,a}]=m[{b,a}]-t;
            continue;
        }
        m[{a,b}]=m[{a,b}]+t;
        
    }
    long long  cnt=0;
    for (const auto &it : m) {
    long long  x = it.first.first;
    long long  y = it.first.second;
    long long  value = it.second;
    if(value!=0)
    {
        cnt++;
    }
}
    cout<<cnt<<endl;
    for (const auto &it : m) {
    long long x = it.first.first;
    long long  y = it.first.second;
    long long  value = it.second;

    if(value == 0)
    {
        continue;
    }
    else if(value > 0)
    {
        cout<<x<<" "<<y<<" "<<value<<endl;
    }
    else{
        cout<<y<<" "<<x<<" "<<-value<<endl;
    }
}
}