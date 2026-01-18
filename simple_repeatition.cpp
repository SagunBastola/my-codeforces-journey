#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool isprime(ll x)
{
    if (x == 1)
    {
        return false;
    }
    if (x <= 3)
    {
        return true;
    }
    if (x % 2 == 0)
    {
        return false;
    }
    for (int i = 4; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, k;
        cin >> x >> k;
        if (x == 1 && k == 2)
        {
            cout << "YES" << endl;
            continue;
        }
        if (k == 1)
        {
            if (isprime(x))
            {
                cout << "YES" << endl;
                continue;
            }
            else
            {
                cout << "NO" << endl;
                continue;
            }
        }
        cout << "NO" << endl;
    }
}