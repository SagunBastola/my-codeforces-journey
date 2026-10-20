#include <bits/stdc++.h>
using ll = long long;
using namespace std;

#define rep(i, m, n) for (ll i = m; i < n; i++)
#define repr(i, m, n) for (ll i = m; i >= n; i--)

void solve()
{
    ll n;
    cin >> n;
    cout << n * (n + 1) / 2 + 2 * n << endl;
    repr(i, n, 1)
    {
        rep(j, 0, i)
        {
            cout << i << " ";
        }
    }

    repr(i, n, 1)
    {
        cout << 0 << " " << i << " ";
    }
    cout << endl;
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