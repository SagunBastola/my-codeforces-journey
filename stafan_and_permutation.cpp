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
    ll n, x, y;
    cin >> n >> x >> y;

    vi a(n);
    cin >> a;

    if (is_sorted(a.begin(), a.end()))
    {
        cout << "YES" << endl;
        return;
    }
    vi b(n);
    rep(i, 0, n)
    {
        b[i] = abs(i + 1 - a[i]);
    }
    ll oddcnt = 0;
    ll evencnt = 0;
    rep(i, 0, n)
    {
        if (b[i] % 2 == 0)
        {
            evencnt++;
        }
        else
        {
            oddcnt++;
        }
    }
    cout<<b<<endl;
    // if (evencnt > 0 && oddcnt > 0)
    // {
    //     if ((x % 2 == 0 && y % 2 == 1) || (x % 2 == 1 && y % 2 == 0))
    //     {
    //         cout << "YES" << endl;
    //         return;
    //     }
    //     else
    //     {
    //         cout << "NO" << endl;
    //         return;
    //     }
    // }
    // else if (oddcnt > 0)
    // {
    //     if (x % 2 == 1 || y % 2 == 1)
    //     {
    //         cout << "YES" << endl;
    //         return;
    //     }
    //     else
    //     {
    //         cout << "NO" << endl;
    //         return;
    //     }
    // }
    // else if (evencnt > 0)
    // {
    //     if (x % 2 == 0 || y % 2 == 0)
    //     {
    //         cout << "YES" << endl;
    //         return;
    //     }
    //     else
    //     {
    //         cout << "NO" << endl;
    //         return;
    //     }
    // }
    // cout<<"yes"<<endl;

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