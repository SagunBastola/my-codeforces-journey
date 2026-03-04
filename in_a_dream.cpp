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
        s<<x;
    }
    return s;
}
#define vi vector<ll>
#define pi pair<ll,ll>
void solve()
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll ma=max(a,b);
    ll mi=min(a,b);
    ma-=(2*mi+2);
    if(ma > 0)
    {
    
        cout<<"NO"<<endl;
        return;
    }
    c-=a;
    d-=b;
    ma=max(c,d);
    mi=min(c,d);
    
    ma-=(mi*2+2);
    if(ma > 0)
    {
        cout<<"NO"<<endl;
        return;
    }
    else{
        cout<<"YES"<<endl;
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
    }
}