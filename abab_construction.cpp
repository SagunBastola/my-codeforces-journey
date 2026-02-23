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
#define vi vector<ll>
#define pi pair<ll, ll>
bool solve1(string s, string t, int start, int end, int i, vector<int8_t> &a)
{
    int n=s.size();
    if (i >= s.size())
    {
        return true;
    }
    if (a[i*(n+1)+start] != -1)
    {
        if (a[i*(n+1)+start] == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    bool possible = false;
    bool ab = false, ba = false;
    if (!possible && (s[i] == t[start] || s[i] == '?'))
    {
        ab = solve1(s, t, start + 1, end, i + 1, a);
        if (ab)
        {
            possible = true;
        }
    }
    if (!possible && (s[i] == t[end] || s[i] == '?'))
    {
        ba = solve1(s, t, start, end - 1, i + 1, a);
    }
    if (ab | ba)
    {
        a[i*(n+1)+start] = 1;
        return true;
    }
    else
    {
        a[i*(n+1)+start] = 0;
        return false;
    }
}
void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vector<int8_t> a((n + 1) * (n + 1), -1);
    string t = "";
    for (int i = 1; i <= n; i++)
    {
        if (i & 1)
        {
            t += "a";
        }
        else
        {
            t += "b";
        }
    }
    ll start = 0;
    ll end = n - 1;
    ll lifeline = 0;
    if (solve1(s, t, start, end, 0, a))
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
    return;
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