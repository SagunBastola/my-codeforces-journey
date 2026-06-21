#include <bits/stdc++.h>
using ll = long long;
using namespace std;
#define rep(i, m, n) for (ll i = m; i < n; i++)
#define repr(i, m, n) for (ll i = m; i >= n; i--)
template <typename T>
istream &operator>>(istream &s, vector<T> &v)
{
    for (auto &x : v)
        s >> x;
    return s;
}
template <typename T>
ostream &operator<<(ostream &s, vector<T> &v)
{
    for (auto &x : v)
    {
        s << x << " ";
    }
    return s;
}
#define vi vector<ll>
#define pi pair<ll, ll>
void solve()
{
    ll n;
    cin>>n;
    
    vi a(n);
    cin>>a;
    ll gcd1=0;
    rep(i,0,n)
    {
        gcd1=gcd(gcd1,a[i]);
        i+=1;
    }
    ll gcd2=0;
    rep(i,1,n)
    {
        gcd2=gcd(gcd2,a[i]);
        i+=1;
    }
    if(gcd1 == gcd2)
    {
        cout<<0<<endl;
    }
    rep(i,0,n)
    {
        if(a[i]%gcd2 == 0)
        {
            cout<<0<<endl;
            return ;
        }
        i++;
    }
    rep(i,1,n)
    {
        if(a[i]%gcd1 == 0)
        {
            cout<<0<<endl;
            return ;
        }
        i++;
    }
    if(gcd1 > gcd2)
    {
        cout<<gcd1<<endl;

    }
    else{
        cout<<gcd2<<endl;
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