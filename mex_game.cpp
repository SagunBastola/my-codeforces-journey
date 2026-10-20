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
    ll n, k;
    cin >> n >> k;

    vi a(n);
    unordered_map<ll, ll> m(n + 1);
    rep(i, 0, n)
    {
        cin >> a[i];
        m[a[i]]++;
    }

    ll count = 0;
    rep(i, 0, n)
    {
        if(m[i] == 0)
        {
            cout<<"NO"<<endl;
            return;
        }
        if(m[i] >= 2*k)
        {
            continue;
        }
        if(m[i] == 2*k-1)
        {
            cout<<"YES"<<endl;
            return;
        }
        else{
            cout<<"NO"<<endl;
            return;
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