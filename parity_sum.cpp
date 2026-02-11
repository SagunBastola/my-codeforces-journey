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
        ll n;
        cin >> n;
        vector<ll> a(n);
        vector<ll> evens;
        ll odd = -1;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 != 0)
            {
                odd = max(odd, a[i]);
            }
            else
            {
                evens.push_back(a[i]);
            }
        }
        if (evens.empty() || odd == -1)
        {
            cout << 0 << endl;
            continue;
        }
        sort(evens.begin(), evens.end());

        ll curr_odd = odd;
        int ans = evens.size();
        bool move = false;

        for (ll x : evens)
        {
            if (x < curr_odd)
            {
                curr_odd += x;
            }
            else
            {
                move = true;
                break;
            }
        }
        if (move)
        {
            cout << ans + 1 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
}