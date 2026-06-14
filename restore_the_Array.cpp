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
    vi a(n - 1);
    cin >> a;
    vi b(n);
    b[0] = a[0];
    if (n > 2)
    {
        b[1] = min(a[0], a[1]);
    }
    else{
        b[1]=0;
    }
    b[n - 1] = a[n - 2];
    for (ll i = 1; i < n - 2; i++)
    {
        if (a[i] <= a[i + 1])
        {
            b[i + 1] = a[i];
        }
        else
        {
            b[i + 1] = a[i + 1];
        }
    }
    cout << b << endl;
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