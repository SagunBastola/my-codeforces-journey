#include <bits/stdc++.h>
using ll = long long;
using namespace std;
#define rep(i, m, n) for (int i = m; i < n; i++)
#define vi vector<int>
#define pi pair<int>
void solve()
{
    int n, k;
    cin >> n>>k;
    if (n == 1)
    {
        cout << k << endl;
        return;
    }
    if (n % k == 0)
    {
        cout << 1 << endl;
        return;
    }
    int mi = min(n, k);
    int ma = max(n, k);
    int cnt = 0;
    if (mi == 0)
    {
        cout << -1 << endl;
        return;
    }
    while (mi < ma)
    {
        mi *= 2;
        cnt++;
    }

    cout << cnt + 1 << endl;
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