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
    int n, k;
    cin >> n >> k;
    vi a(n);
    cin >> a;
    sort(a.begin(), a.end());
    ll to_sub = 0;
    ll prev = 0;
    vi b;
    b.push_back(a[0]);
    rep(i,0,n)
    {
        if(b.back() != a[i])
        {
            b.push_back(a[i]);
        }
    }
    int ka=k;
    if(k > b.size())
    {
        ka=b.size();
    }
    rep(i, 0, ka)
    {
        if (b[i] - to_sub <= 0)
        {
            cout<<0<<endl;
        }
        else
        {
            cout << b[i] - to_sub<<endl;
            b[i]=b[i]-to_sub;
        }
        to_sub+=b[i];
    }
    if(k>ka)
    {
        rep(i,ka,k)
        {
            cout<<0<<endl;
        }
    }
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