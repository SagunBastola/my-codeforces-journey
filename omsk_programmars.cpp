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
    ll a, b, x;
    cin >> a >> b >> x;
    if ((a < x && b < x) || (a == b))
    {
        ll mi = min(1ll * 2, 1ll * abs(a - b));
        cout << mi << endl;
        return;
    }
    ll mi = min(a, b);
    ll ma = max(a, b);
    ll ans=INT_MAX;
    ll i=0;
    while (mi != ma)
    {
        if (mi > ma)
        {
            swap(mi, ma);
        }
        ans=min(ans,abs(ma-mi)+i);

        i++;
        ma=ma/x;
        
    }
    ans=min(ans,i);
    cout<<ans<<endl;
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