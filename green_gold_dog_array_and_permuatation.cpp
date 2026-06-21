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
        s<<x<<" ";
    }
    return s;
}
#define vi vector<ll>
#define pi pair<ll,ll>
void solve()
{
    ll n;
    cin>>n;

    vector<pair<ll,ll>> v(n);
    rep(i,0,n)
    {
        ll a;
        cin>>a;
        v[i].first=a;
        v[i].second=i;
    }
    sort(v.rbegin(),v.rend());
    ll min1=1;
    vi a(n);
    rep(i,0,n)
    {
        a[v[i].second]=min1;
        min1++;
    }
    cout<<a<<endl;
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