#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, h;
        cin >> n >> m >> h;
        vector<ll> vec(n);
        for (ll &x : vec)
        {
            cin >> x;
        }
        vector<ll> original=vec;
        for (int i = 0; i < m; i++)
        {
            ll x, y;
            cin >> x >> y;
            vec[x - 1] += y;
            if(vec[x-1] > h)
            {
                vec=original;
            }
        }
        for(ll& x : vec)
        {
            cout<<x<<" ";
        }
        cout << endl;
    }
}