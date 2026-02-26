#include <bits/stdc++.h>
using ll = long long;
using namespace std;
#define rep(i, m, n) for (ll i = m; i < n; i++)
#define repr(i, m, n) for (ll i = m; i >= n; i--)
template<typename T>
istream& operator>>(istream &s, vector<T> &v)
{
    for(auto &x : v)
        s >> x;
    return s;
}
template<typename T>
ostream& operator<<(ostream& s,vector<T> &v)
{
    for(auto &x : v)
    {   
        s<<x;
    }
    return s;
}
#define vi vector<ll>
#define pi pair<ll,ll>

void solve()
{
    ll n;
    cin>>n;
    ll ans=1;
    ll temp=n;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i == 0)
        {
            ans*=i;
            while(n%i == 0)
            {
                n=n/i;
            }
        }
    }
    if(n > 1)
    {
        ans*=n;
    }
    cout<<ans<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}