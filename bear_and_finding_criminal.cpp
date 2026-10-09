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
    ll n, a;
    cin >> n >> a;

    vi crim(n);
    cin >> crim;

    ll ans = 0;
    if (crim[a - 1] == 1)
    {
        ans++;
    }

    ll i = a - 2;
    ll j = a;
    while (i >= 0 && j < n)
    {
        if (crim[i] == 1 && crim[j] == 1)
        {
            ans += 2;
        }
        i--;
        j++;
    }
    while (i >= 0)
    {
        if (crim[i] == 1)
        {
            ans++;
        }
        i--;
    }
    while (j < n)
    {
        if(crim[j] == 1)
        {
            ans++;
        }
        j++;
    }
    cout<<ans<<endl;
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