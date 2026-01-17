#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve()
{
    ll n;
    cin>>n;
    vector<ll> vec(n);
    for(ll& x : vec)
    {
        cin>>x;
    }
    sort(vec.begin(),vec.end());
    for(int i=1;i<n-1;i=i+2)
    {
        if(vec[i]!= vec[i+1])
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    return;
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