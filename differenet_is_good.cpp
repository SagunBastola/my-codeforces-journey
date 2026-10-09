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

    string s;
    cin>>s;

    unordered_set<char> seen;
    ll ans=0;
    ll unique=0;
    rep(i,0,n)
    {
        if(seen.find(s[i]) != seen.end())
        {
            ans++;
        }
        else{
            unique++;
            seen.insert(s[i]);
        }
    }
    if(ans > 26-unique)
    {
        cout<<-1<<endl;
        return;
    }
    cout<<ans<<endl;
    
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