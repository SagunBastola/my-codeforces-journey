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

    vi diff(n);
    rep(i, 0, n)
    {

        diff[i] = b[i] - a[i];
        if(i % 2 !=0)
        {
            diff[i]=-diff[i];
        }
    }
    rep(i,0,n)
    {
        if(i==0)
        {
            if(diff[i] < 0)
            {
                cout<<"NO"<<endl;
                return;
            }
            continue;
        }
        if(i%2 == 0)
        {
            if(diff[i] < diff[i-1])
            {
                cout<<"NO"<<endl;
                return;
            }
        }
        else
        {
            if(diff[i] > diff[i-1])
            {
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
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