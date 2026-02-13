#include <bits/stdc++.h>
using ll = long long;
using namespace std;
#define rep(i, m, n) for (int i = m; i < n; i++)
#define vi vector<int>
#define pi pair<int>
void solve()
{
    int n;
    cin >> n;
    int idx = 1;
    vi a(n * n);
    int low=1;
    int high=n*n;
    rep(i,0,n*n) {
        if (i % 2 == 0) {
            a[i] = low++;
        } else {
            a[i] = high--;
        }
    }
    rep(i, 0, n)
    {
        if (i % 2 == 0)
        {
            rep(j, 0, n)
            {
                cout << a[i * n + j] << " ";
            }
        }
        else
        {
            for (int j = n - 1; j >= 0; j--)
            {
                cout << a[i * n + j] << " ";
            }
        }
        cout << endl;
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