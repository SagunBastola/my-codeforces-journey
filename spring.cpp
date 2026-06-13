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
        s << x;
    }
    return s;
}
#define vi vector<ll>
#define pi pair<ll, ll>
long long lcm(long long a, long long b)
{
    return (a / gcd(a, b)) * b;
}
void solve()
{
    ll a, b, c, m;
    cin >> a >> b >> c >> m;
    ll abc = lcm(lcm(a, b), c);

    ll a_result = (m / a) * 6 + 2 * (m / abc) - 3 * (m / lcm(a, c)) - 3 * (m / lcm(a, b));

    ll b_result = (m / b) * 6 + 2 * (m / abc) - 3 * (m / lcm(b, c)) - 3 * (m / lcm(a, b));

    ll c_result = (m / c) * 6 + 2 * (m / abc) - 3 * (m / lcm(a, c)) - 3 * (m / lcm(b, c));

    cout<<a_result<<" "<<b_result<<" "<<c_result<<endl;
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