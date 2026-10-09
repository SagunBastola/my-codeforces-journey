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
    ll n, m;
    cin >> n >> m;

    string s, t;
    cin >> s >> t;

    ll max_cnt = INT_MAX;
    vi ans;
    rep(i, 0, m - n + 1)
    {
        ll cnt = 0;
        vi a;
        rep(j, 0, n)
        {
            if (s[j] != t[i + j])
            {
                cnt++;
                a.push_back(j + 1);
            }
        }
        if (cnt < max_cnt)
        {
            // cout<<a<<endl;
            ans = a;
            max_cnt = cnt;
        }
    }
    cout << ans.size() << endl;
    cout << ans << endl;
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