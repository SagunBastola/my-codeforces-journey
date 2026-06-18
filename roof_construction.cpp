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
    
    ll i=1;
    ll j=0;
    while(i < n)
    {
        i*=2;
        j++;
    }
    
    ll a=1;
    a=a<<(j-1);
    
    vi b(n);
    j=a-1;
    i=0;
    while(j >= 0)
    {
        b[i]=j;
        j--;
        i++;
    }
    j=a;
    while(j < n)
    {
        b[i]=j;
        i++;
        j++;
    }
    cout<<b<<endl;
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