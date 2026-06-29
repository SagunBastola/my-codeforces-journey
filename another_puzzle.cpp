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
    ll n,c;
    cin>>n>>c;
    vi a(n),b(n);
    cin>>a>>b;
    ll cost=0;
    bool can_be_done=false;
    rep(i,0,n)
    {
        if(a[i] < b[i])
        {
            can_be_done= true;
        }
    }
    if(can_be_done)
    {
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        cost+=c;
    }
    ll sum1=0;
    ll sum2=0;
    rep(i,0,n)
    {
        if(a[i] < b[i])
        {
            cout<<-1<<endl;
            return;
        }
        sum1+=a[i];
        sum2+=b[i];
    }
    cout<<sum1-sum2+cost<<endl;
    

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