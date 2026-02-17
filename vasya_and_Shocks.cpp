#include <bits/stdc++.h>
using ll = long long;
using namespace std;
#define rep(i, m, n) for (ll i = m; i < n; i++)
#define repr(i, m, n) for (ll i = m; i >= n; i--)
template<typename T>
istream& operator>>(istream &s, vector<T> &v)
{
    for(auto &x : v)
        s >> x;
    return s;
}
#define vi vector<ll>
#define pi pair<ll,ll>
void solve()
{
    ll n,m;
    cin>>n>>m;
    ll cnt=0;
    ll c=0;
    while(n>0)
    {
        n--;
        c++;
        cnt++;
        if(cnt == m)
        {
            cnt=0;
            n++;
        }
    }
    cout<<c<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    t=1;
    while (t--)
    {
        solve();
    }
}