#include <bits/stdc++.h>
using ll = long long;
using namespace std;
#define rep(i, m, n) for (int i = m; i < n; i++)
void solve()
{
    ll n;
    cin >> n;

    ll a = -1, b = -1;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            a = i;
            n /= i;
            break;
        }
    }
    for (ll i = max(a + 1,1ll*2); i * i <= n; i++)
    {
        if (n % i == 0)
        {
            b = i;
            n /= i;
            break;
        }
    }
    if (a != -1 && b != -1 && n > 1 && n != a && n != b)
    {
        cout << "YES" << endl;
        cout << a << " " << b << " " << n << endl;
    }
    else
    {
        cout << "NO" << endl;
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