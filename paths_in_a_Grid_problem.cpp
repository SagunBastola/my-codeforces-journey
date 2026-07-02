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
ll inf = -10000000000;
ll check(ll x, ll y, ll n, vector<vi> &a, vector<vi> &ans)
{
    if (x >= n || y >= n)
    {
        return inf;
    }
    if (ans[x][y] != -1)
    {
        return ans[x][y];
    }
    if (x == n-1 && y == n-1)
    {
        return a[n - 1][n - 1];
    }
    
    ll down = check(x + 1, y, n, a, ans);
    ll up = check(x,y+1,n,a,ans);
    ans[x][y]=max(down,up)+a[x][y];
    return ans[x][y];
}
void solve()
{
    ll n;
    cin >> n;

    vector<vi> a;
    rep(i, 0, n)
    {
        vi b(n);
        cin >> b;
        a.push_back(b);
    }
    vector<vi> sum(n, vector<ll>(n, -1));
    cout<<check(0, 0, n, a, sum)<<endl;
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