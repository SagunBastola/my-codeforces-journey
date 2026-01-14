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
        cin >> n;
        vector<ll> vec(n);
        for (ll &x : vec)
        {
            cin >> x;
        }
        int cnt = 0;
        ll idxmax = vec[0];
        if (n <= 1)
        {
            cout << 0 << endl;
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            idxmax=max(idxmax,vec[i]);
            if (idxmax== vec[i])
            {
                cnt++;
            }
        }
        cout << n-cnt << endl;
    }
}