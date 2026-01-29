#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        ll p,q;
        if (x >= 10)
        {
            p = x - 10;
        }
        else
        {
            p = 0;
        }
        if (y >= 10)
        {
            q = y - 10;
        }
        else
        {
            q = 0;
        }
        while (p < x + 10)
        {
            while (p & q && q < y + 10)
            {
                q++;
            }
            p++;
        }
        cout << p << " " << q << endl;
        cout << endl;
    }
}