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
    float n, r, b;
    cin >> n >> r >> b;
    ll cn = round(r / (b + 1));
    ll temp = cn;
    string s = "";
    while (temp > 0 && r > 0)
    {
        s += 'R';
        r--;
        temp--;
    }
    s += 'B';
    b--;
    while (r > 0 && b > 0)
    {
        temp = round(r / (b + 1));
        while (temp > 0 && r > 0)
        {
            s += 'R';
            r--;
            temp--;
        }
        s+='B';
        b--;
    }
    while (r > 0)
    {
        s += 'R';
        r--;
    }
    cout << s << endl;
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