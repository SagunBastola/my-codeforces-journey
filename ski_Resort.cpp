#include <bits/stdc++.h>
using ll = long long;
using namespace std;
#define rep(i, m, n) for (ll i = m; i < n; i++)
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, q;
        cin >> n >> k >> q;
        vector<ll> vec(n);
        rep(i, 0, n)
        {
            cin >> vec[i];
        }
        ll sum = 0;
        rep(i, 0, n)
        {
            ll na = 0;
            ll idx = i;
            while (idx < n && vec[idx] <= q)
            {
                idx++;
                na++;
            }
            if (na >= k)
            {
                ll aa = (na - k + 1);
                sum += aa * (aa + 1) / 2;
            }
            if (na != 0)
            {
                i = idx - 1;
            }
        }
        cout << sum << endl;
    }
}