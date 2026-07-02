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
ll check(ll target, vector<ll> &coin, vector<ll> &ans)
{
    if (target < 0)
    {
        return 10000000;
    }
    if (target == 0)
    {
        return 0;
    }
    if (ans[target] != -1)
        return ans[target];

    ll best = 10000000;
    rep(i, 0, coin.size())
    {
        if (target - coin[i] >= 0)
        {
            ll res = check(target - coin[i], coin, ans);
            best = min(best, res + 1);
        }
    }
    ans[target] = best;
    return ans[target];
}
void solve()
{
    ll n;
    cin >> n;
    vi coin(n);
    cin >> coin;

    ll target;
    cin >> target;
    vector<ll> ans(target + 1, -1);
    ll best = check(target, coin, ans);
    cout << best << endl;
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