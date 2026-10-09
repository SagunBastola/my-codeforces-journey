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
template<typename T>
ostream& operator<<(ostream& s,vector<T> &v)
{
    for(auto &x : v)
    {   
        s<<x<<" ";
    }
    return s;
}
#define vi vector<ll>
#define pi pair<ll,ll>
void solve()
{
    ll n,m;
    cin>>n>>m;

    vi a(m);
    cin>>a;

    ll cost=0;
    ll initial=1;
    rep(i,0,m)
    {
        if(a[i] >= initial)
        {
            cost+=(a[i]-initial);
        }   
        else{
            cost+=(a[i]-initial+n);
        }
        initial=a[i];
    }
    cout<<cost<<endl;
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