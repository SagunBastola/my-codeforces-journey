#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,s;
        cin>>n>>s;
        vector<ll> vec(n);
        for(ll& x : vec)
        {
            cin>>x;
        }
        ll start=s-vec[0];
        ll end=vec[n-1]-s;
        if(start<0 || end<0)
        {
            if(start<0)
            {
                cout<<end<<endl;
                continue;
            }
            else{
                cout<<start<<endl;
                continue;
            }
        }
        ll mi=min(start,end);
        ll ma=max(start,end);
        cout<<2*mi+ma<<endl;
        
    }
}