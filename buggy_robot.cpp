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
    string s;
    cin>>n>>s;
    ll d=0,u=0,l=0,r=0;
    rep(i,0,n)
    {
        if(s[i] == 'L')
        {
            l++;
        }
        else if(s[i] == 'R')
        {
            r++;
        }
        else if(s[i] == 'U')
        {
            u++;
        }
        else if(s[i] == 'D')
        {
            d++;
        }
    }   
    ll total=2*min(u,d)+2*min(r,l);
    cout<<total<<endl;
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