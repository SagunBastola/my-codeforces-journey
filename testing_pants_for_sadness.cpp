#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll n;
    cin>>n;
    vector<ll> vec(n);
    for(ll& x : vec)
    {
        cin>>x;
    }
    ll cnt=0;
    for(ll i=0;i<n;i++)
    {
        cnt+=(i+1)*(vec[i]-1)+1;
    }
    cout<<cnt;
}