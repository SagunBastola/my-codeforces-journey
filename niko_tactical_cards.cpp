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
        vector<ll> a(n),b(n);
        for(ll& x : a)
        {
            cin>>x;
        }
        for(ll& x : b)
        {
            cin>>x;
        }
        ll pos=0; ll neg=0;
        for(int i=0;i<n;i++)
        {
            ll p=max(pos-a[i],b[i]-neg);
            ll n=min(neg-a[i],b[i]-pos);
            pos=p;
            neg=n;
        }
        cout<<pos<<endl;
    }
}