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
    ll n, k;
    cin >> n >> k;
    vi a(n);
    cin >> a;
    if (k == 2 || k == 3 || k == 5)
    {
        ll min_rem = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            a[i] = a[i] % k;
            if (a[i] == 0)
            {
                cout << 0 << endl;
                return;
            }
            min_rem = min(min_rem, k - a[i]);
        }
        cout << min_rem << endl;
        return;
    }
    else if (k == 4)
    {
        ll cnt_two = 0;
        ll min_rem = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % k == 0)
            {
                cout << 0 << endl;
                return;
            }
            if (a[i] % 2 == 0)
            {
                cnt_two++;
                if(cnt_two > 2)
                {
                    cout<<0<<endl;
                    return;
                }
            }
            min_rem=min(min_rem,k-a[i]%4);
        }
        cout<<min(min_rem,2-cnt_two)<<endl;
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