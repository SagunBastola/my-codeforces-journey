#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;
        vector<ll> a(n);
        vector<ll> b(n);
        vector<ll> c(n);
        for(ll i=0;i<n;i++)
        {
            cin>>a[i]>>b[i]>>c[i];
        }
        ll mx=INT_MIN;
        ll start=0;
        for(ll i=0;i<n;i++)
        {
            mx=max(mx,a[i]*b[i]-c[i]);
            start+=a[i]*(b[i]-1);
        }
        x-=start;
        if(x <= 0)
        {
            cout<<0<<endl;
            continue;
        }
        if(mx<=0)
        {
            cout<<-1<<endl;
            continue;
        }
        cout<< (x+mx-1)/mx<<endl;
    }
}