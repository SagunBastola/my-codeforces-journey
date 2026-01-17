#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,alice;
        ll bob;
        cin>>n>>alice;
        vector<ll> vec(n);
        for(ll& x : vec)
        {
            cin>>x;
        }
        ll a=0;
        ll l=0;
        ll r=0;
        for(int i=0;i<n;i++)
        {
            if(vec[i]<alice)
            {
                l++;
            }
            if(vec[i]>alice)
            {
                r++;
            }
        }
        if(l>=r)
        {
            bob=alice-1;
        }
        else 
        {
            bob=alice+1;
        }
        cout<<bob<<endl;

    }
}