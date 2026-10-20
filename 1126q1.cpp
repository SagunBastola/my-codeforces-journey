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
    ll a, b;
    cin >> a >> b;
    a = abs(a);
    b = abs(b);

    if (b % 2 == a % 2 && a >= b)
    {
        cout << a << endl;
    }
    else if (b % 2 != a % 2 && a + 1 >= b)
    {
        cout << a + 1 << endl;
    }
    else
    {
        cout << -1 << endl;
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