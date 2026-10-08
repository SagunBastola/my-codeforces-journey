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
    unordered_map<ll, ll> m;
    ll n;
    cin >> n;
    vi a(n);
    cin >> a;
    unordered_set<ll> sum;
    vi ab;
    rep(i, 0, n - 4)
    {
        ll s = a[i] + a[i + 2] - a[i + 4];
        ab.push_back(s);
        if (sum.find(s) != sum.end())
        {
            m[s]++;
        }
        else
        {
            sum.insert(s);
            m[s] = 1;
        }
    }
    ll ans = 0;
    ll ss = ab.size();
    for (ll i = 0; i < ss; i++)
    {
        if (m[ab[i]] < 2)
        {
            continue;
        }
        else
        {
            ans += m[ab[i]] - 1;
            m[ab[i]] = m[ab[i]] - 1;
            if (i + 2 < ss && ab[i + 2] == ab[i])
            {
                ans--;
            }
            if (i + 4 < ss && ab[i + 4] == ab[i])
            {
                ans--;
            }
        }
    }
    cout << ans << endl;
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