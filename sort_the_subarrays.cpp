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
    ll n;
    cin >> n;
    vi a(n);
    vi b(n);
    cin >> a >> b;
    ll i = 0;
    ll j = n - 1;
    while (i <= j)
    {
        if (a[i] == b[i])
        {
            i++;
        }
        if (a[j] == b[j])
        {
            j--;
        }
        if (a[i] != b[i] && a[j] != b[j])
        {
            break;
        }
    }
    sort(a.begin() + i, a.begin() + j + 1);
    for (int k = i - 1; k >= 0; k--)
    {
        if (a[k] <= a[i])
        {
            i--;
        }
        else
        {
            break;
        }
    }
    for (int k = j + 1; k < n; k++)
    {
        if (a[k] >= a[j])
        {
            j++;
            ;
        }
        else
        {
            break;
        }
    }

    cout << i + 1 << " " << j + 1 << "\n";
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