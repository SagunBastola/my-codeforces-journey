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
    ll target;
    cin >> target;
    vi a(n);
    cin >> a;

    ll lp = 0;
    ll rp = 0;
    ll sum = a[lp];
    while (lp < n && rp < n)
    {
        if (sum == target)
        {
            cout << lp << " " << rp << endl;
            return;
        }
        while (sum < target)
        {

            rp++;
            if (rp != n)
            {
                sum += a[rp];
            }
        }
        while(target < sum)
        {
            sum-= a[lp];
            lp++;
        }
    }
    cout<<-1<<endl;
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