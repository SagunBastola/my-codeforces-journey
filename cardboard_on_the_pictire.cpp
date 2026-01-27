#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull=unsigned long long;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, c;
        cin >> n >> c;
        vector<ll> vec(n);
        ll sum = 0;
        ll sq = 0;
        for (ll &x : vec)
        {
            cin >> x;
        }
        ull low = 0;
        ull high = 1e7;
        ull ans = 0;
        while (low <= high)
        {
            ull mid = low + (high - low) / 2;
            ull total_area = 0;

            for (int i = 0; i < n; i++)
            {
                ull side = vec[i] + 2 * mid;
                total_area += side * side;
                if (total_area > c)
                    break;
            }

            if (total_area == c)
            {
                ans = mid;
                break;
            }
            else if (total_area > c)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        cout << ans << endl;
    }
}