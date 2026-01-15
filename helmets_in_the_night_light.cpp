#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        ll x;
        cin >> n >> x;
        vector<ll> a(n);
        for (ll &x : a)
        {
            cin >> x;
        }
        vector<ll> cost(n);
        for (ll &x : cost)
        {
            cin >> x;
        }
        vector<pair<ll, ll>> pa;
        for (int i = 0; i < n; i++)
        {
            pa.push_back({cost[i], a[i]});
        }
        sort(pa.begin(), pa.end());
        ll total = n - 1;
        ll tcost = x;
        for (int i = 0; i < n; i++)
        {
            if (x <= pa[i].first)
            {
                break;
            }
            else
            {
                if (total >= pa[i].second)
                {
                    total -= pa[i].second;
                    tcost += pa[i].first * pa[i].second;
                }
                else
                {
                    tcost += pa[i].first * total;
                    total = 0;
                }
            }
        }
        if (total > 0)
        {
            tcost += total * x;
        }

        cout << tcost << endl;
    }
}