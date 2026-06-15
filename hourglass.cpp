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
    ll s,k,m;
    cin>>s>>k>>m;
    if(k > m)
    {
        cout<<max(1ll*0,s-m);
        return;
    }
    if((m/k)&1)
    {
        ll rem=m%k;
        cout<<max(1ll*0,min(s,k)-rem);
        return;
    }
    else{
        cout<<max(1ll*0,min(s,k)-(m%k));
        return ;
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
        cout<<endl;
    }
}