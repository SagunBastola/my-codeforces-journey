#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int l = k - 1;
        int r = n - k;

        int ans;
        if (m <= l + r)
        {
            ans = m + 1;
        }
        else
        {
            int temp = (m - (l + r)) / 2;
            ans = min(n, l + r + 1 + temp);
        }
        cout << ans << endl;
    }
}