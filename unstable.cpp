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

    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }

    vi b;
    ll count = 1;
    rep(i, 1, n)
    {
        if (a[i] == a[i - 1])
        {
            count++;
        }
        else
        {
            b.push_back(count);
            count = 1;
        }
    }
    b.push_back(count);
    // cout<<b<<endl;
    ll max_ele = *max_element(b.begin(), b.end());
    ll ans = 0;
    ll zero_cnt = 0;
    rep(i, 0, b.size())
    {
        if (b[i] - max_ele == 0)
        {
            zero_cnt++;
        }
    }
    // if (zero_cnt == 1)
    // {
    //     ans++;
    // }
    // // cout<<ans<<endl;

    // if (k % b.size() == 0 && k != 1)
    // {
    //     ans++;
    // }
    // cout<<ans<<endl;
    ll sum = 0;
    rep(i, 0, b.size())
    {
        sum += b[i];
    }
    sort(b.begin(), b.end());

    sum=0;
    rep(i,0,b.size())
    {
        sum+=b[i];
    }
    ll m = b.size();

    for (int i = 0; i < m; i++)
    {
        if (i == 0 || b[i] != b[i - 1])
        {
            ll small = b[i];
            ll rem = m - i;
            ll possible_removal = small - 1;
            ll smallest_length = sum - possible_removal * rem;

            if (k >= smallest_length &&
                k % rem == sum % rem)
            {
                ans++;
            }
        }

        sum -= b[i];
    }
    cout << ans << endl;
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