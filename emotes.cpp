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
    ll n,m,k;
    cin>>n>>m>>k;
    vi a(n);
    cin>>a;
    sort(a.begin(),a.end());
    ll ma=a[a.size()-1];
    ll ma2=a[a.size()-2];
    ll eachitr=ma*k+ma2;
    ll no_of_itr=m/(k+1);
    ll total_cost=no_of_itr*eachitr+(m%(k+1))*ma;
    cout<<total_cost<<endl;
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