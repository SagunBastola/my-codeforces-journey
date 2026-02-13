#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, m, n) for (int i = m; i < n; i++)
#define vi vector<int>
#define pi pair<int, int>
void solve()
{
    int n;
    cin >> n;
    vi a(n), b(n - 1), c(n - 2);
    rep(i, 0, n)
    {
        cin >> a[i];
    }
    rep(i, 0, n - 1)
    {
        cin >> b[i];
    }
    rep(i, 0, n - 2)
    {
        cin >> c[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    int ans1 = a[n - 1];
    rep(i, 0, n - 1)
    {
        if (a[i] != b[i])
        {
            ans1 = a[i];
            break;
        }
    }
    cout << ans1 << "\n";

    int ans2 = b[n - 2];
    rep(i, 0, n - 2)
    {
        if (b[i] != c[i])
        {
            ans2 = b[i];
            break;
        }
    }
    cout << ans2 << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}