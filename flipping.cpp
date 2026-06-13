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
void solve()
{
    ll x;
    cin >> x;
    string s;
    cin >> s;
    ll no_of_ones = 0;
    for (ll i = 0; i < x; i++)
    {
        if (s[i] == '1')
        {
            no_of_ones++;
        }
    }
    if (no_of_ones % 2 == 1 && x % 2 == 1)
    {
        cout << -1 << endl;
        return;
    }
    if (no_of_ones == 0)
    {
        cout << 0 << endl;
        return;
    }
    if ((s.size() % 2 == 0 && no_of_ones % 2 == 0) || (s.size() % 2 == 1 && no_of_ones % 2 == 1))
    {
        cout << no_of_ones << endl;
        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                cout << i + 1 << " ";
            }
        }
        cout << endl;
        return;
    }
    else
    {
        cout << x - no_of_ones << endl;
        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                cout << i + 1 << " ";
            }
        }
        cout << endl;
        return;
    }
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