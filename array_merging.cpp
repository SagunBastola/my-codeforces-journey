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
    vi b(n);
    cin>>b; 

    vi ab(2*n+1,0);
    ll count=0;
    for(ll j=0;j<n;)
    {
        ll default1=a[j];
        j++;
        count=1;
        
        while(j< n && a[j] == a[j-1])
        {
            j++;
            count++;
        }
        ab[default1]=max(ab[default1],count); 
    }
    vi ba(2*n+1,0);
    for(ll j=0;j<n;)
    {
        ll default1=b[j];
        j++;
        count=1;
        
        while(j< n && b[j] == b[j-1])
        {
            j++;
            count++;
        }
        ba[default1]=max(ba[default1],count); 
    }
    ll ans=0;
    for(int i=1;i<=2*n;i++)
    {
        ans=max(ans,ab[i]+ba[i]);
    }
    cout<<ans<<endl;
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