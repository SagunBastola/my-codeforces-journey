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
    ll n,k;
    cin>>n>>k;
    vi a(n);
    cin>>a;

    sort(a.begin(),a.end());
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
        sum+=a[i];
    }
    ll low=0;
    ll high=n-1;
    vi c(k+1),d(k+1);
    c[0]=0;
    d[0]=0;
    for(ll i=1;i<=k;i++)
    {
        c[i]=c[i-1]+a[low]+a[low+1];
        low+=2;
    }
    for(ll i=1;i<=k;i++)
    {
        d[i]=d[i-1]+a[high];
        high--;
    }
    ll result=c[0]+d[k];
    for(ll i=0;i<=k;i++)
    {
        result=min(result,c[i]+d[k-i]);
    }
    cout<<sum-result<<endl;
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