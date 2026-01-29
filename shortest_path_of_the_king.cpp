#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll solve(ll x, ll y)
{
    ll p = x;
    ll q1 = y;
    bool one = false;
    ll q2 = y;
    bool two = false;
    int i = 0;
    while (y > 0)
    {
        y = y >> 1;
        i++;
    }
    while (q1 >= y - 10e5 && q1 >= 0)
    {
        if (!(p & q1))
        {
            one = true;
            break;
        }
        q1--;
    }
    while (q2 <= y + 10e5)
    {
        if (!(p & q2))
        {

            two = true;
            break;
        }
        q2++;
    }
    int q = y;
    if (one && two)
    {
        q = abs(y - q1) < abs(y - q2) ? q1 : q2;
    }
    else if (one)
    {
        q = q1;
    }
    else
    {
        q = q2;
    }
    while (i != 0)
    {
        q <<= 1;
        i--;
    }
    return q;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        ll q1 = solve(x, y);
        int p1 = solve(y, x);
        if (abs(x - p1) > abs(y - q1))
        {
            cout << x << " " << q1 << endl;
        }
        else
        {
            cout << p1 << " " << y << endl;
        }
    }
}