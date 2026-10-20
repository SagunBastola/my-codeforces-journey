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
ostream &operator<<(ostream &s, const vector<T> &v)
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

    ll a = 0;
    while (a * (a + 1) / 2 <= n)
    {
        a++;
    }
    vi ans(n, 0);
    ll cons = 0;

    rep(i, 1, a)
    {
        ll j = 0;
        while (j < i)
        {
            ans[cons] = i;
            j++;
            cons++;
        }
    }

    rep(i, a, n + 1)
    {
        ll j = 0;
        while (j < n && j < i - a + 1 && cons < n)
        {
            ans[cons] = i;
            j++;
            cons++;
        }
    }

    vi cost(n + 1, 0);
    for (ll i = 0; i < n;)
    {
        ll j = i;
        while (j < n && ans[j] == ans[i])
        {
            j++;
        }
        ll c = j - i;
        cost[c]++;
        i = j;
    }

    ll ab=0;
    rep(i,0,cost.size())
    {
        ab=max(ab,cost[i]*i);
    }
    cout<<ab<<endl;
    cout << ans << endl;
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
    return 0;
}