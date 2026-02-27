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
int count(ll n)
{
    int cnt = 1;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            cnt++;
            n=n/i;
            while(n%i == 0)
            {
                cnt++;
                n=n/i;
            }
        }
    }
    if (n > 1)
    {
        cnt++;
    }
    return cnt;
}
void solve()
{
    int n;
    cin >> n;
    vi a(n);
    cin >> a;

    if (is_sorted(a.begin(), a.end()))
    {
        cout << "Bob" << endl;
        return;
    }
    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        
        cnt += (count(a[i]) - 1);
    }

    if (cnt % 2 == 0)
    {
        cout << "Bob" << endl;
    }
    else
    {
        cout << "Alice" << endl;
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