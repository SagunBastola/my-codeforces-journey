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

    if(n==2)
    {
        cout<<2<<endl;
        return;
    }
    ll rem = n;
    rem = rem-(n / 2 - 1);  
    ll cnt=1;
    ll sub=n/2-2;
    while(sub > 0)
    {
        rem-=sub;
        sub--;
        cnt++;
    }
    cnt+=rem;
    cout<<cnt*(n/2-1)<<endl;
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