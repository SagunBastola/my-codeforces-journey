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
    string s = "";
    ll factor = floor(n / 4);
    rep(i, 0, factor)
    {
        s += "aabb";
    }
    if (n - factor * 4 == 0)
    {
        cout << s << endl;
    }
    else if (n - factor * 4 == 1)
    {
        cout << s + "a" << endl;
    }
    else if (n - factor * 4 == 2)
    {
        cout << s + "aa" << endl;
    }
    else
    {
        cout << s + "aab" << endl;
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