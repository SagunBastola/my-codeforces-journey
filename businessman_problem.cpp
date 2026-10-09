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
    
    unordered_set<ll> seen;
    unordered_map<ll,ll> max_cost;
    rep(i,0,n)
    {
        ll a;
        ll cost;
        cin>>a>>cost;
        seen.insert(a);
        max_cost[a]=cost;
    }
    ll m;
    cin>>m;
    rep(i,0,m)
    {
        ll b;
        ll cost;
        cin>>b>>cost;
        if(seen.find(b) != seen.end())
        {
            max_cost[b]=max(max_cost[b],cost);
        }
        else{
            max_cost[b]=cost;
            seen.insert(b);
        }
    }
    ll total=0;
    for(ll c : seen)
    {
        total+=max_cost[c];
    }
    cout<<total<<endl;
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