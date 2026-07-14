#include <bits/stdc++.h>
using ll = long long;
using namespace std;
#define rep(i, m, n) for (ll i = m; i < n; i++)
#define repr(i, m, n) for (ll i = m; i >= n; i--)
template <typename T>
istream &operator>>(istream &s, vector<T> &v)
{
    for (auto &x : v)
        s >> x;
    return s;
}
template <typename T>
ostream &operator<<(ostream &s, vector<T> &v)
{
    for (auto &x : v)
    {
        s << x << " ";
    }
    return s;
}
#define vi vector<ll>
#define pi pair<ll, ll>
void solve()
{
    int n, m;
    cin >> n >> m;
    vi a(n), b(m);
    cin >> a >> b;
    ll idx = 0;
    sort(b.begin(), b.end());
    ll ans = 0;
    for (ll i = 0; i < m; i++)
    {
        ll s = 0;
        for (ll j = idx; j < b[i]; j++)
        {
            s += a[j];
        }
        idx = b[i];
        ans += abs(s);
    }
    ll s = 0;
    for (ll j = idx; j < n; j++)
    {
        s += a[j];
    }
    ans += s;
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