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
    stack<char> st;
    ll n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    ll cnt = 0;
    ll bcnt = -1;
    ll j = -1;
    vi a;
    rep(i, 0, n)
    {
        if (s[i] == '(')
        {
            cnt++;
        }
        else
        {
            if (cnt == 0)
            {
                continue;
            }
            a.push_back(cnt);
            cnt = 0;
        }
    }
    if (k == 0 || a.size() == 1)
    {
        sort(a.begin(), a.end());
        cout << a[a.size() - 1] << endl;
        return;
    }
    if (a.size() <= k + 1)
    {
        cout << n / 2 << endl;
        return;
    }
    ll ans = 0;
    rep(i, 0, k+1)
    {
        ans += a[i];
    }
    ll maxans = ans;
    ans=ans-1;
    rep(i, k, a.size())
    {
        ans += (a[i] - a[i - k]-1);
        maxans = max(maxans, ans);
    }
    cout << maxans << endl;
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