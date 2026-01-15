#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
ll solve(ll n)
{
    if((n & (n-1)) == 0)
    {
        return 1;
    }
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        cout<<solve(n);
    }
}