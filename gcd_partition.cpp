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
    
    vi a(n);
    cin>>a;

    ll sum=0;
    rep(i,0,n)
    {
        sum+=a[i];
    }
    ll sum2=0;
    ll max_gcd=INT_MIN;
    rep(i,0,n-1)
    {
        sum-=a[i];
        sum2+=a[i];
        max_gcd=max(max_gcd,gcd(sum,sum2));

    }
    cout<<max_gcd<<endl;
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