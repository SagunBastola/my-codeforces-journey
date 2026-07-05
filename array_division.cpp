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
    cin >> a;

    ll sum = 0;
    rep(i, 0, n)
    {
        sum += a[i];
    }
    if (sum % 2 != 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        vi suffix(n);
        vi prefix(n);
        suffix[0]=a[0];
        ll suff_sum=a[0];
        rep(i,1,n)
        {
            suffix[i]=suffix[i-1]+a[i];
            suff_sum+=suffix[i];
        }
        prefix[n-1]=a[n-1];
        ll pre_sum=prefix[n-1];
        repr(i,n-2,0)
        {
            prefix[i]=prefix[i+1]+a[i];
            pre_sum+=prefix[i];
        }
        if(abs(pre_sum-suff_sum) > suffix[n-1])
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    t = 1;
    while (t--)
    {
        solve();
    }
}