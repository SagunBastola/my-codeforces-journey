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
    ll n, d;
    cin >> n >> d;

    vector<pair<ll, ll>> vec(n);
    rep(i, 0, n)
    {
        pair<ll, ll> a;
        cin >> a.first >> a.second;
        vec[i] = a;
    }
    sort(vec.begin(), vec.end());
    ll min_index = 0;
    ll ans = 0;
    ll curr = 0;
    rep(i, 0, n)
    {
        if (vec[min_index].first + d > vec[i].first)
        {
            curr += vec[i].second;
            ans = max(curr, ans);
        }
        else
        {
            curr += vec[i].second;
            while (vec[min_index].first + d <= vec[i].first)
            {
                curr-=vec[min_index].second;
               min_index++; 
            }
            ans = max(curr, ans);
        }
    }
    ans = max(curr, ans);
    cout << ans << endl;
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