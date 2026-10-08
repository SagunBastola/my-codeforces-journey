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
int check(ll i, string s)
{
    if (i < 0 || i + 3 >= s.size())
    {
        return 0;
    }
    if (s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '0' && s[i + 3] == '0')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void solve()
{
    string s;
    cin >> s;
    ll length = s.size();
    ll cnt = 0;
    rep(i, 0, length - 3)
    {
        cnt += check(i, s);
    }
    ll q;
    cin >> q;
    rep(i, 0, q)
    {
        ll a;
        char b;
        cin >> a >> b;
        if (s[a - 1] == b)
        {
            if (cnt > 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            ll idx = a - 1;
            ll before = 0;
            rep(j, idx - 3, idx + 1)
            {
                before += check(j, s);
            }
            s[idx] = b;
            ll after = 0;
            rep(j, idx - 3, idx + 1)
            {
                after += check(j, s);
            }
            cnt += (after - before);
            if (cnt > 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
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