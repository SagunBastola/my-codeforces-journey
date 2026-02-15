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
#define vi vector<ll>
#define pi pair<ll,ll>
void solve()
{
    ll n;
    cin>>n;
    vi a(n);
    cin>>a;
    reverse(a.begin(),a.end());
    rep(i,0,n)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
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