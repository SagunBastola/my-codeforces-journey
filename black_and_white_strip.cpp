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

    ll k;
    cin >> k;

    string s;
    cin >> s;

    vector<ll> vec(n+1);

    for(int i=1;i<=n;i++)
    {
        vec[i]=vec[i-1]+int(s[i-1] == 'W');
    }
    ll result=INT_MAX;
    for(int i=k;i<=n;i++)
    {
        result=min(result,-vec[i-k]+vec[i]);
    }
    cout<<result<<endl;
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