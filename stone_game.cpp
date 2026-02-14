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
#define vi vector<int>
#define pi pair<int>

void solve()
{
    ll n;
    cin >> n;
    vi a(n);
    cin >> a;
    
    int cnt = 0;
    int c = 0;
    int ans = INT_MAX;
    
    rep(i, 0, n)
    {
        c++;
        if (a[i] == 1 || a[i] == n)
        {
            cnt++;
        }
        if (cnt == 2)
        {
            break;
        }
    }
    ans = c;
    
    c = 0;
    cnt = 0;
    repr(i, n-1, 0)
    {
        c++;
        if (a[i] == 1 || a[i] == n)
        {
            cnt++;
        }
        if (cnt == 2)
        {
            break;
        }
    }
    ans = min(c, ans);
    
    int c_left = 0;
    rep(i, 0, n) 
    {
        c_left++;
        if (a[i] == 1 || a[i] == n) 
        {
            break;
        }
    }
    
    int c_right = 0;
    repr(i, n-1, 0) 
    {
        c_right++;
        if (a[i] == 1 || a[i] == n) 
        {
            break;
        }
    }
    
    ans = min(ans, c_left + c_right);
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