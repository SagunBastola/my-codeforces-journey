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

    vi a(n), b(n);
    cin >> b >> a;

    unordered_set<ll> already_seen;
    ll last = 0;
    rep(i, 0, n)
    {
        ll cnt = 0;
        if (already_seen.find(a[i]) != already_seen.end())
        {
            cout << 0 << " ";
        }
        else
        {
            rep(j, last, n)
            {
                if (a[i] == b[j])
                {
                    cnt++;
                    already_seen.insert(b[j]);
                    cout << cnt << " ";
                    last = j+1;
                    break;
                }
                else
                {
                    already_seen.insert(b[j]);
                    cnt++;
                }
            }
        }
    }
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