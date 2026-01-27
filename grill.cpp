#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll k, a, b, x, y;
        cin >> k >> a >> b >> x >> y;

        ll cnt = 0;

        if (x <= y)
        {
            if (k > a)
            {
                ll steps = (k - a + x - 1) / x;
                cnt += steps;
                k -= steps * x;
            }
            if (k == a)
            {
                cnt++;
                k -= x;
            }
            if (k > b)
            {
                ll steps = (k - b + y - 1) / y;
                cnt += steps;
                k -= steps * y;
            }
            if (k == b)
            {
                cnt++;
                k -= y;
            }
        }
        else
        {
            if (k > b)
            {
                ll steps = (k - b + y - 1) / y;
                cnt += steps;
                k -= steps * y;
            }
            if (k == b)
            {
                cnt++;
                k -= y;
            }
            if (k > a)
            {
                ll steps = (k - a + x - 1) / x;
                cnt += steps;
                k -= steps * x;
            }
            if (k == a)
            {
                cnt++;
                k -= x;
            }
        }

        cout << cnt << endl;
    }
}