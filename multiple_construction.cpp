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
    unordered_set<ll> s;
    for(ll i=0;i<n;i++)
    {
        s.insert(i+1);
    }
    vi a(2*n,0);
    ll b=n;
    for(int i=2*n-1;i>=n;i--)
    {
        a[i]=b;
        ll j=i;
        while(a[j-b] !=0 )
        {
            j=j-b;
        }
        a[j-b]=b;
        b--;
    }
    cout<<a<<endl;
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