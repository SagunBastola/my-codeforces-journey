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
    {
        s << x << " ";
    }
    return s;
}
#define vi vector<ll>
#define pi pair<ll, ll>
void solve()
{
    int n;
    cin >> n;
    int a = 0;
    for (ll i = 1234; i*2 <= 99999; i++)
    {
        a = i;
        ll check = a * n;
        ll check2 = a;
        unordered_set<int> s;
        unordered_set<int> s1;
        bool f = false;
        while (check > 0)
        {
            int d=check%10;
            if (s.find(d) == s.end())
            {
                s.insert(d);
                check /= 10;
            }
            else
            {
                f = true;
                break;
            }
        }
        while (check2 > 0)
        {
            int d=check2%10;
            if (s1.find(d) == s1.end())
            {
                s1.insert(d);
                check2 /= 10;
            }
            else
            {
                f = true;
                break;
            }
        }
        if (f)
        {
            f=false;
            continue;
        }
        if (a * n >= 10000 && a * n <= 99999)
        {
            break;
        }
    }
    if (a == 0)
    {
        cout << "NO" << endl;
        return;
    }
    if (a < 10000)
    {
        cout << a * n << '/' << '0' << a << endl;
    }
    else
    {
        cout << a * n << '/' << a << endl;
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
}