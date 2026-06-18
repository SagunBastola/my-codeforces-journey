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

    vi a(n);
    vi b(n);
    cin >> a >> b;
    vector<ll> d = a;
    sort(d.begin(), d.end());
    rep(i, 0, n)
    {
        if (d[i] > b[i])
        {
            cout << -1 << endl;
            return;
        }
    }
    vector<ll> rb = b;
    ll total_swaps = 0;

    for(int i = 0; i < n; i++) {
        ll curr = a[i];
        
        for(int j = 0; j < rb.size(); j++) {
            if(rb[j] >= curr) {
                total_swaps += j;
                rb.erase(rb.begin() + j);
                break;
            }
        }
    }
    cout<<total_swaps<<endl;
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