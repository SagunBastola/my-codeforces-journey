#include <bits/stdc++.h>
using ll = long long;
using namespace std;
#define rep(i, m, n) for (ll i = m; i < n; i++)
#define repr(i, m, n) for (ll i = m; i >= n; i = i - 2)
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
    long double pie = 3.1415926536;
    cin >> n;

    vi r(n);
    cin >> r;

    sort(r.begin(), r.end());
    long double area = 0;
    repr(i, n - 1, 0)
    {
        if (i - 1 >= 0)
        {
            area+=pie*double(r[i]*r[i]-r[i-1]*r[i-1]);
        }
        else{
            area+=pie*double(r[i]*r[i]);
        }
    }
    cout<<fixed<<setprecision(10)<<(area)<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    t=1;
    while (t--)
    {
        solve();
    }
}