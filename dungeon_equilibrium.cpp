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
        sort(vec.begin(), vec.end());
        ll cnt = 0;
        ll dis = 0;
        for (ll i = 0; i < n; i++)
        {
            if (i > 0 && vec[i] == vec[i - 1])
            {
                dis = dis + 1;
                continue;
            }
            cnt = vec[i];
            ll c = 0;
            if (vec[i] == 0)
            {
                dis += 1;
                continue;
            }
            ll j = i;
            while (cnt > 0 && j < n && vec[i] == vec[j])
            {
                j++;
                c++;
                cnt--;
            }
            i = j - 1;
            if (cnt != 0)
            {
                dis += c;
            }
        }
        cout << dis << endl;
    }
}