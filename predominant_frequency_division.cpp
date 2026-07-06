#include <bits/stdc++.h>
using ll = long long;
using namespace std;

#define rep(i, m, n) for (ll i = m; i < n; i++)
#define repr(i, m, n) for (ll i = m; i >= n; i--)

template <typename T>
istream &operator>>(istream &s, vector<T> &v)
{
    for (auto &x : v)
        s >> x;
    return s;
}

#define vi vector<ll>

void solve()
{
    ll n;
    cin >> n;
    vi a(n);
    cin >> a;

    ll i = 0;
    ll no_of_ones = 0;

    while (i < n - 2)
    {
        if (a[i] == 1)
        {
            no_of_ones++;
        }
        else if (a[i] == 2 || a[i] == 3)
        {
            no_of_ones--;
        }

        if (no_of_ones >= 0)
        {
            i++;
            while(a[i] == 3 && no_of_ones > 0)
            {
                no_of_ones--;
                i++;
            }
            break;
        }
        i++;
    }

    if (no_of_ones < 0)
    {
        cout << "NO" << endl;
        return;
    }

    ll no_of_threes = 0;
    if (i == n - 1)
    {
        cout << "NO" << endl;
        return;
    }
    while (i < n - 1)
    {
        if (a[i] == 3)
        {
            no_of_threes++;
        }
        else if (a[i] == 2 || a[i] == 1)
        {
            no_of_threes--;
        }

        if (no_of_threes <= 0)
        {
            break;
        }
        i++;
    }

    if (no_of_threes > 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}