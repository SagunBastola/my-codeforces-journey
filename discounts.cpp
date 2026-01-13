#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        vector<ll> price(n);
        vector<ll> discounts(m);
        ll total=0;
        for (ll &x : price)
        {
            cin >> x;
            total += x;
        }
        for (ll &x : discounts)
        {
            cin >> x;
        }
        sort(discounts.begin(), discounts.end());
        sort(price.begin(), price.end());
        ll idx = n;
        for (ll i = 0; i < m && idx > 0; i++)
        {
            idx = idx - discounts[i];
            if (idx >= 0)
            {
                total -= price[idx];
            }
        }
        cout << total << endl;
    }
}