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
    int n;
    cin >> n;
    vi a(n * 4, -1);
    int j = 0;
    if (n % 2 == 1)
    {
        j = n - 2;
        n = n - 3;
    }
    for (int i = 1; i <= n; i = i + 2)
    {
        cout << i << " " << i + 1 << " " << i << " " << i << " ";
        cout << i + 1 << " " << i + 1 << " " << i << " " << i + 1 << " ";
    }
    if (j == 0)
    {
        return;
    }
    int i = j;
    cout << i << " " << i << " " << i + 1 << " " << i << " ";
    cout << i + 1 << " " << i + 2 << " " << i << " " << i + 2 << " ";
    cout << i + 1 << " " << i + 1 << " " << i + 2 << " " << i + 2 << " ";
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
        cout<<endl;
    }
}