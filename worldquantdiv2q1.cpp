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
    string s;
    cin >> s;

    ll first=-1;
    ll last=-1;

    ll one_cnt=0;
    rep(i,0,n)
    {
        if(s[i] == '1')
        {
            one_cnt++;
        }
    }
    if(one_cnt == 2)
    {
        cout<<1<<endl;
        return;
    }
    rep(i,0,n)
    {
        if(s[i] == '1')
        {
            first=i;
            break;
        }
    }
    repr(i,n-1,0)
    {
        if(s[i] == '1')
        {
            last=i;
            break;
        }
    }
    cout<<last-first<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}