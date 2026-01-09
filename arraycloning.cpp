#include <bits/stdc++.h>
using namespace std;
// error
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> q;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            q[x]++;
        }
        int am = 0;
        for (auto &[x, y] : q)
        {
            am = max(am, y);
        }
        int ans = 0;
        while (am < n)
        {
            int d = min(n - am, am);
            ans += 1 + d;
            am += d;
        }
        cout << ans << '\n';
    }
    return 0;
}