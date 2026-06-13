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
        s<<x <<" ";
    }
    return s;
}
#define vi vector<ll>
#define pi pair<ll,ll>
void solve()
{
    ll n;
    cin>>n;
    ll x,y;
    cin>>x>>y;
    vi a(n);
    cin>>a;
    vi b(n),c(n);
    ll sum=0;
    ll rem=0;
    for(ll i=0;i<a.size();i++)
    {
        sum+=a[i];
        b[i]=a[i]%x;
        rem+=b[i];
    }
    ll div=0;
    for(ll i=0;i<a.size();i++)
    {
        div+=a[i]/x;
        c[i]=a[i]/x;
    }
    ll maxcurr=0;
    for(ll i=0;i<n;i++)
    {
        maxcurr=max(maxcurr,sum-rem+b[i]-div*abs(x-y)+c[i]*abs(x-y));
    }
    cout<<maxcurr<<endl;
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