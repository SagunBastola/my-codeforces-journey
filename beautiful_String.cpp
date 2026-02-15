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
// again
void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vi pos;
    rep(i, 0, n)
    {
        if (s[i] == '0')
        {
            pos.push_back(i + 1);
        }
    }
    cout << pos.size() << endl;
    rep(i, 0, pos.size()) { cout << pos[i] << " "; }
    cout << endl;
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