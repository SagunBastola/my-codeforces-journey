#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll l,r;
        cin>>l>>r;
        ll diff=r-l;
        ll ans=0;
        ll x=1;
        ans=x*(x+1)/2;
        while(ans<=diff)
        {
            x++;
            ans=x*(x+1)/2;
            
        }
        cout<<x<<endl;
        
    }
}