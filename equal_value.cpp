#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> vec(n);
        for(ll& x: vec)
        {
            cin>>x;
        }
        ll ans=LLONG_MAX;
        for(ll i=0;i<n;i++)
        {
            ll j=i;
            while(j<n && vec[i] == vec[j])
            {
                j++;
            }
            ans=min(ans,(i+n-j)*vec[i]);
            i=j;
            i--;
        }
        cout<<ans<<endl;
    }
}