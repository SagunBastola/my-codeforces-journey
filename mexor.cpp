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
void iter(int n, int k, int i, vector<int> a, int ans)
{
    if (i <= 0)
    {
    }
}
void solve()
{
    ll n, k;
    cin >> n >> k;
    if (n == 1)
    {
        if (k == 1)
        {
            cout << "YES" << endl;
            cout << "0" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        return;
    }
    if (k == n)
    {
        rep(i, 1, n)
        {
            cout << i << " ";
        }
        cout << 0 << endl;
        return;
    }
    int set = 0;
    int k1 = k;
    vi a;
    int c = 0;
    while (k1)
    {
        if (k1 & 1)
        {
            a.push_back((1 << c));
            set++;
        }
        c++;
        k1 = k1 >> 1;
    }
    // cout<<set<<endl;
    // cout<<a<<endl;
    sort(a.begin(), a.end());
    unordered_set<ll> s;
    rep(i, 1, n)
    {
        s.insert(i);
    }
    vi ans(n, 0);
    ans[n - set - 1] = 0;
    int j = 0;
    // cout<<a<<endl;
    for (int i = n - set; i < n; i++)
    {
        s.erase(a[j]);
        ans[i] = a[j++];
        if (a[j - 1] >= n)
        {
            cout << "NO" << endl;
            return;
        }
    }

    ll i = 0;
    for (ll x : s)
    {
        ans[i] = x;
        i++;
    }

    cout << "YES" << endl;
    rep(i,0,n)
    {
        if(ans[i] == k)
        {
            continue;
        }
        cout<<ans[i]<<" ";
    }
    cout<<k<<endl;
    
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