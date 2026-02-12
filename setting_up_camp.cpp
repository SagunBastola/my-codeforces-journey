#include <bits/stdc++.h>
using ll = long long;
using namespace std;
#define rep(i, m, n) for (int i = m; i < n; i++)
void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    ll ans = a;
    ans += b / 3;
    int rem = b % 3;
    if (rem != 0)
    {
        int needed = 3 - rem;
        if (c < needed)
        {
            cout << -1 << endl;
            return;
        }
        ans++;
        c -= needed;
    }

    ans += (c + 2) / 3;
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
}