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
    ll n;
    cin>>n;
    vector<pair<ll,ll>> vec(n);
    rep(i,0,n)
    {
        pair<ll,ll> a;
        cin>>a.second>>a.first;
        vec[i]=a;
    }
    sort(vec.begin(),vec.end());
    ll count=0;
    ll prev=0;
    rep(i,0,n)
    {
        if(prev <= vec[i].second)
        {
            count++;
            prev=vec[i].first;
        }
    }
    cout<<count<<endl;
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