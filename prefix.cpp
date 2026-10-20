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

// Custom hash struct for std::pair<ll, ll> to use in unordered_set
struct HashFunction
{
    size_t operator()(const pi &p) const
    {
        auto h1 = hash<ll>{}(p.first);
        auto h2 = hash<ll>{}(p.second);
        // Combine the two hash values
        return h1 ^ (h2 + 0x9e3779b9 + (h1 << 6) + (h1 >> 2));
    }
};

void dynamic(vi &a, ll n, ll s, ll &max1, unordered_set<pi, HashFunction> &visited)
{
    if (n == 0)
    {
        max1 = max(max1, a[0]);
        dynamic(a, 1, a[0], max1, visited);
        return;
    }
    if (n == a.size() - 1)
    {
        max1 = max(max1, a[n] + abs(s));
        return;
    }
    max1 = max(max1, a[n] + abs(s));
    pi state = {n, s};
    if (visited.count(state))
    {
        return;
    }
    visited.insert(state);
    dynamic(a, n + 1, 2 * s + a[n], max1, visited);
    dynamic(a, n + 1, a[n], max1, visited);
    dynamic(a, n + 1, s + a[n], max1, visited);
}

void solve()
{
    ll n;
    cin >> n;

    vi a(n);
    cin >> a;

    ll max1 = LLONG_MIN;
    unordered_set<pi, HashFunction> visited;
    dynamic(a, 0, 0, max1, visited);
    cout << max1 << "\n";
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