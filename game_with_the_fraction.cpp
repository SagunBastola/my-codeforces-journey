#include <bits/stdc++.h>
using ll = long long;
using namespace std;
#define rep(i, m, n) for (int i = m; i < n; i++)
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll p,q;
        cin>>p>>q;
        if(p >= q)
        {
            cout<<"Alice"<<endl;
            continue;
        }
        if(p<2 && q<3)
        {
            cout<<"Alice"<<endl;
            continue;
        }
        ll x=3*p-2*q;
        if(x>=0)
        {
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Alice"<<endl;
        }
    }
}