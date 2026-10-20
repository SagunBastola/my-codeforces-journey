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
bool is_prime(ll b)
{
    ll cnt = 0;
    rep(i, 2, b)
    {
        if (b % i == 0)
        {
            cnt++;
        }
    }
    if (cnt == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void solve()
{
    ll a, b;
    cin >> a >> b;

    if (a <= b)
    {
        cout << -1 << endl;
        return;
    }
    ll c = min(b, a - b);
    cout << c << endl;
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