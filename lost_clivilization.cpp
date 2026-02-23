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
#define vi vector<ll>
#define pi pair<ll, ll>
void solve()
{
    unordered_map<int, int> m;
    ll n;
    cin >> n;
    vi a(n);
    cin >> a;
    ll max1 = 0;
    for (int i = 0; i < n; i++)
    {
        max1 = max(max1, a[i]);
        m[a[i]]++;
    }
    ll sum = 0;
    ll result = INT_MAX;
    for (int i = 1; i < max1; i++)
    {
        if (m[i + 1] == 0)
        {
            result = min(result, n - sum);
            sum = 0;
        }
        sum += min(m[i], m[i + 1]);
        m[i + 1] += 1;
    }
    result = min(result, n - sum);
    if (result != n - sum)
    {
        if (max1 > n)
        {
            result++;
        }
    }
    cout << result << endl;
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