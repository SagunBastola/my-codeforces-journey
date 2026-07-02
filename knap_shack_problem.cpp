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
int check(ll wei, ll k, vector<ll> &weights, vector<vector<ll>> &result,ll j)
{
    if (wei == 0 && k >= 0)
    {
        return 1;
    }
    else if (wei < 0 || k < 0)
    {
        return 0;
    }
    if (result[wei][k] != -1)
    {
        return result[wei][k];
    }
    result[wei][k] = 0;
    for (ll i=j;i<weights.size();i++)
    {
        if ((check(wei - weights[i], k - 1, weights, result,i+1) || check(wei, k - 1, weights, result,i+1)));
        {
            result[wei][k]=1;
        }
    }
    return result[wei][k];
}
void solve()
{
    ll n, k;
    cin >> n >> k;

    ll wei;
    cin >> wei;

    vi weights(n);
    cin >> weights;

    vector<vector<ll>> result(wei + 1, vector<ll>(k + 1, -1));

    cout << check(wei, k, weights, result,0) << endl;
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