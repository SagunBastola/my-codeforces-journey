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
ll factorial(ll n)
{
    if (n < 0)
        return 0;

    ll fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
void solve()
{
    ll n;
    cin >> n;
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    if (n <= 2)
    {
        cout << -1 << endl;
        return;
    }
    
    // vi a(n,0);
    // ll ans = factorial(n);
    // ll div = 2;
    // rep(i, 0, n-2 )
    // {
    //     a[i] = ans / div;
    //     ans = ans / div;
    // }
    // // if (n % 2 == 1)
    // // {
    // //     a[n - 2] = 5;
    // //     a[n - 1] = ans - 5;
    // // }
    // // else{
    // //     a[n-2]=n;
    // //     a[n-1]=2;
    // // }
    // a[n - 2] = ans / 3;
    // a[n - 1] = (ans * 2) / 3;
    // cout << a << endl;
    vi a(n);
    a[0]=1;
    a[1]=2;
    ll ans=a[0]+a[1];
    rep(i,0,n-2)
    {
        a[i+2]=ans;
        ans=ans+a[i+2];
    }
    cout<<a<<endl;
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