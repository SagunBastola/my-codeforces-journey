#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,n;
        cin>>a>>b>>n;
        vector<ll> vec(n);
        for(ll& x : vec)
        {
            cin>>x;
        }
        ll sum=0;
        sum+=min(a-1,b-1);
        b=1;
        for(ll i=0;i<n;i++)
        {
            sum+=min(a-1,b-1+vec[i]);
            b=1;
        }
        cout<<sum+1<<endl;
        
    }   
}