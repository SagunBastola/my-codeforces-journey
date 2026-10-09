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

    ll first_one=-1;
    rep(i,0,n)
    {
        if(a[i] == 1)
        {
            first_one=i;
            break;
        }
    }
    if(first_one == -1)
    {
        cout<<0<<endl;
        return;
    }
    ll cost=1;
    rep(i,first_one+1,n)
    {
        if(a[i] == 1 && a[i-1] == 0)
        {
            cost+=2;
        }
        else if(a[i] == 1)
        {
            cost++;
        }
    }
    cout<<cost<<endl;
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