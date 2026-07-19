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

template <typename T>
ostream &operator<<(ostream &s, vector<T> &v)
{
    for (auto &x : v)
        s << x << " ";
    return s;
}

#define vi vector<ll>
#define pi pair<ll, ll>

// void solve()
// {
//     ll n;
//     cin >> n;

//     vi a(n), b(n);
//     cin >> a >> b;

//     ll cost = 0;
//     bool odd = false;
//     bool notequal = false;
//     bool impossible = false;

//     rep(i, 0, n)
//     {
//         if (a[i] != b[i])
//         {
//             notequal = true;
//             if (a[i] == 1)
//             {
//                 odd = !odd;
//             }
//         }
//         else
//         {
//             if (notequal)
//             {
//                 if (odd)
//                 {
//                     odd=false;
//                     cost++;
//                 }
//                 else
//                 {
//                     impossible = true;
//                     break;
//                 }

//                 notequal = false;
//                 continue;
//             }
//         }
//     }

//     if (impossible)
//     {
//         cout << -1 << endl;
//         return;
//     }

//     if (notequal)
//     {
//         if (odd)
//             cout << cost + 1 << endl;
//         else
//             cout << -1 << endl;
//         return;
//     }

//     cout << cost << endl;
// }

void solve()
{
    ll n;
    cin >> n;
    vi a(n), b(n);
    cin >> a >> b;
    int t = 0, dc = 0, di = 0, e = 0;
    rep(i, 0, n)
    {
        if (a[i] == 1 && b[i] == 1)
        {
            t++;
        }
        else if (a[i] == 0 && b[i] == 0)
        {
            e++;
        }
        else if (a[i] == 1)
        {
            dc++;
        }
        else
        {
            di++;
        }
    }
    if (dc == 0 && di == 0)
    {
        cout << 0 << endl;
    }
    else if (dc % 2 == 1)
    {
        cout << 1 << endl;
    }
    else
    {
        if (dc >= 2)
        {
            cout << 2 << endl;
        }
        else
        {
            if (t >= 1 && e >= 1)
            {
                cout << 2 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}