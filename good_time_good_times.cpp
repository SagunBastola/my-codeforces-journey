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
 
 
bool good(ll x,ll xi) {
    vector<bool> vis(10,false);
    int cnt = 0;
    while (x) {
        int d = x % 10;
        if (!vis[d]) {
            vis[d] = true;
            cnt++;
        }
        x /= 10;
    }
    if(cnt > 2)
    {
        return false;
    }
    cnt=0;
    vector<bool> vis2(10,false);
    while (xi) {
        int d = xi % 10;
        if (!vis2[d]) {
            vis2[d] = true;
            cnt++;
        }
        xi /= 10;
    }
    if(cnt > 2)
    {
        return false;
    }
    return true;
}
void solve()
{
    ll n;
    cin>>n;
    if(n<=50)
    {
        cout<<2<<endl;
        return;
    }
    ll x=n;
    ll y=-1;
    for(ll i=2;i<x;i++)
    {
        if(good(i,x*i))
        {
            y=i;
            break;
        }
    }
    cout<<y<<endl;
 
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