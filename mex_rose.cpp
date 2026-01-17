#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll> vec(n),cnt(k+1,0);
        ll kk=0;
        for(ll& x : vec)
        {
            cin>>x;
            if(x<=k)
            {
                cnt[x]++;
            }
            if(x== k)
            {
                kk++;
            }
        }
        ll ans=0;
        for(int i=0;i<k;i++)
        {
            if(cnt[i] == 0)
            {
                ans++;
            }
        }
        cout<<max(ans,kk)<<endl;
        
        
    }
}