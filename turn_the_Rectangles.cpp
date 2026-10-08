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
    ll n;
    cin >> n;
    vector<pi> a(n);
    rep(i, 0, n)
    {
        ll w, h;
        cin >> w >> h;
        pi b;
        b.first=w;
        b.second=h;
        a[i]=b;
    }
    rep(i, 1, n)
    {
        if ((a[i].first <= a[i - 1].first || a[i].first <= a[i - 1].second) || ((a[i].second <= a[i - 1].first || a[i].second <= a[i - 1].second)))
        {
            continue;
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    t = 1;
    while (t--)
    {
        solve();
    }
}