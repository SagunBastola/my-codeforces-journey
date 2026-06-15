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
    string s;
    cin >> s;

    ll n = s.size();
    ll one = 0;
    ll zero = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            zero++;
        }
        else
        {
            one++;
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0' && one > 0)
        {
            one--;
        }
        else if (s[i] == '0')
        {
            cout<<n-i<<endl;
            return;
        }
        else if (s[i] == '1' && zero > 0)
        {
            zero--;
        }
        else if (s[i] == '1')
        {
            cout<<n-i<<endl;
            return;
        }
    }
    cout<<0<<endl;
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