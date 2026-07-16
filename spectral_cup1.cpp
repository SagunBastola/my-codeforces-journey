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
    ll k;
    cin>>k;
    string s;
    cin>>s;
    if(n < 2*k)
    {
        cout<<-1<<endl;
        return;
    }
    //case-1;
    ll cost=0;
    rep(i,0,k)
    {if(s[i] == 'L')
    {cost++;}};
    repr(i,n-1,n-k)
    {if(s[i] == 'R')
    {
        cost++;
    }}
    cout<<cost<<endl;
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