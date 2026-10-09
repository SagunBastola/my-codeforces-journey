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
ll find_cost(ll a,unordered_map<ll,ll> cost)
{
    ll initial=0;
    while(a > 0)
    {
        initial+=cost[a%10];
        a=a/10;
    }
    return initial;
}
void solve()
{
    unordered_map<ll,ll> cost;
    cost[0]=6;
    cost[1]=2;
    cost[2]=5;
    cost[3]=5;
    cost[4]=4;
    cost[5]=5;
    cost[6]=6;
    cost[7]=3;
    cost[8]=7;
    cost[9]=6;

    ll a,b;
    cin>>a>>b;
    
    ll ans=0;
    rep(i,a,b+1)
    {
        ans+=find_cost(i,cost);
    }
    cout<<ans<<endl;
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