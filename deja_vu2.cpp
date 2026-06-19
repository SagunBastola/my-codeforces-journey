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
    ll n, q;
    cin >> n >> q;
    vi vec(n);
    vi qu(q);
    cin >> vec;
    cin >> qu;
    ll mn=30;
    for (int i = 0; i < q; i++)
    {
        if(mn <= qu[i])
        {
            continue;
        }
        mn=qu[i];

        ll add = (1LL << mn);

        for (int j = 0; j < n; j++)
        {
            if (vec[j] % add == 0)
            {
                vec[j] += (add/2);
            }
        }
    }
    cout<<vec<<endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}