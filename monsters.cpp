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
        s << x + 1 << " ";
    }
    return s;
}
#define vi vector<ll>
#define pi pair<ll, ll>
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<pair<ll,ll>> b;
    for (ll i = 0; i < n; i++)
    {
        ll h;
        cin >> h;
        h = h % k;
        if (h == 0)
        {
            h = k;
        }
        b.push_back({-h,i});
    }
    sort(b.begin(),b.end());
    for(auto ab : b)
    {
        cout<<ab.second+1<<" "; 
    }
    cout << "\n";
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