#include <bits/stdc++.h>
using ll = long long;
using namespace std;
#define rep(i, m, n) for (int i = m; i < n; i++)
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> b(n - 1);
        vector<int> a(n);
        rep(i, 0, n - 1)
        {
            cin >> b[i];
        }
        a[0] = b[0];
        rep(i, 1, n - 1)
        {
            a[i] = b[i - 1] | b[i];
        }
        a[n - 1] = b[n - 2];
        bool ab = false;
        rep(i, 0, n - 1)
        {
            if ((a[i] & a[i + 1]) != b[i])
            {
                ab = true;
            }
        }
        if (ab)
        {
            cout << -1 << endl;
        }
        else
        {
            rep(i, 0, n)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
}