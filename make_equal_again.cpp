#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define f first
#define s second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define Max(x) (*max_element(all(x)))
#define Min(x) (*min_element(all(x)))
#define Sum(x) (accumulate(all(x), 0LL))
#define sz(x) ((int)x.size())
#define Unique(x) \
    sort(all(x)); \
    (x).erase(unique(all(x)), x.end())
template <typename T, typename U>
istream &operator>>(istream &s, pair<T, U> &p)
{
    s >> p.f >> p.s;
    return s;
}
template <typename T>
istream &operator>>(istream &s, vector<T> &v)
{
    for (auto &x : v)
        s >> x;
    return s;
}
template <typename T, typename U>
ostream &operator<<(ostream &s, const pair<T, U> &p)
{
    s << p.f << ' ' << p.s << endl;
    return s;
}
template <typename T>
ostream &operator<<(ostream &s, const vector<T> &v)
{
    for (auto &x : v)
        s << x << ' ';
    s << '\n';
    return s;
}
template <typename T>
T sqr(T x) { return x * x; }
void solve()
{
    ll n;
    cin>>n;
    vector<ll> vec(n);
    cin>>vec;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}