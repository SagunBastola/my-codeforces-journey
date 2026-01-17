#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> a(n);
        vector<ll> b(n);
        ll odd=0;
        ll even=0;
        ll s=0;
        ll idx=0;
        for(ll& x : a)
        {
            cin>>x;
            s^=x;
        }
        for(ll& x : b)
        {
            cin>>x;
            s^=x;
        }
        if(s == 0)
        {
            cout<<"Tie"<<endl;
            continue;
        }
        else 
        {
            for(int i=0;i<n;i++)
            {
                if(a[i] == 1 && b[i] == 1)
                {
                    continue;
                }
                else if(a[i] == 1 || b[i] == 1)
                {
                    idx=i;
                }
            }
        }
        if(idx&1)
        {
            cout<<"Mai";
        }
        else{
            cout<<"Ajisai";
        }
        cout<<endl;
        
    }
}