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
#define vi vector<ll>
#define pi pair<ll, ll>
vector<int> dp(5000, -1);
ll func(ll n, ll a, ll b, ll c)
{
    if (n == 0)
    {
        return 0;
    }
    if (n < 0)
    {
        return INT_MIN;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    ll aa = func(n - a, a, b, c);
    ll bb = func(n - b, a, b, c);
    ll cc = func(n - c, a, b, c);
    dp[n] = max({aa, bb, cc}) + 1;
    return dp[n];
}
void solve()
{
    ll n, a, b, c;
    cin >> n >> a >> b >> c;
    ll na = func(n, a, b, c);
    cout << na << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    while (t--)
    {
        solve();
    }
}