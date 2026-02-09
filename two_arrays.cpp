#include <bits/stdc++.h>
using namespace std;
#define rep(i, n, m) for (int i = n; i < m; i++)
#define vi vector<int>

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi a(n), b(n);
        rep(i, 0, n)
        {
            cin >> a[i];
        }
        rep(i, 0, n)
        {
            cin >> b[i];
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int k = 1;
        rep(i, 0, n)
        {
            if (a[i] == b[i] || a[i] + 1 == b[i])
            {
                continue;
            }
            k = 0;
        }
        if (k)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
