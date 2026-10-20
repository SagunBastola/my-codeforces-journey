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

    string s;
    cin>>s;

    ll ans=0;
    // if(s[0] == s[s.size()-1])
    // {
    //     ans++;
    // }
    ans=1;
    ll cnt1=0;
    ll cnt2=0;
    rep(i,1,s.size()-1)
    {
        if(s[i-1] == s[i+1])
        {
            
            if(s[i] == s[i+1])
            {
                cnt1++;
            }
            else{
                cnt2++;
            }
        }
    }
    if(cnt1 > 0)
    {
        ans++;
    }
    if(cnt2 > 0)
    {
        ans++;
    }
    cout<<ans<<endl;
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