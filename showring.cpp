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
    ll n,s,m;
    cin>>n>>s>>m;
    vector<pi> vec(n);
    rep(i,0,n)
    {
        cin>>vec[i].first;
        cin>>vec[i].second;
    }
    ll gap=0;
    gap=max(gap,vec[0].first-0);
    gap=max(gap,m-vec[n-1].second);
    rep(i,0,n-1)
    {
        gap=max(gap,abs(vec[i+1].first-vec[i].second));
    }
    if(gap >= s)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
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