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
    ll n,m;
    cin>>n>>m;

    unordered_map<string,string> words;
    rep(i,0,m)
    {
        string s1,s2;
        cin>>s1>>s2;
        if(s1.size() > s2.size())
        {
            words[s1]=s2;
        }
        else{
            words[s1]=s1;
        }
    }
    string ans;
    string s;
    cin>>s;
    ans+=words[s];
    rep(i,1,n)
    {
        cin>>s;
        ans=ans+" "+words[s];
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