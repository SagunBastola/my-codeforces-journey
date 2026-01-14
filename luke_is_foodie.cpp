#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve()
{
    ll n,x;
    cin>>n>>x;
    vector<ll> vec(n);
    for(ll&  y: vec)
    {
        cin>>y;
    }
    ll l=vec[0]-x; 
    ll r=vec[0]+x;
    ll cnt=0;
    for(ll i=0;i<n;i++)
    {
        l=max(l,vec[i]-x);
        r=min(r,vec[i]+x);
        if(l>r)
        {
            l=vec[i]-x;
            r=vec[i]+x;
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}