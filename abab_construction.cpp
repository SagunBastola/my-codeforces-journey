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
#define vi vector<ll>
#define pi pair<ll, ll>
bool solve1(string s,string t,int start,int end,int i)
{
    if(i>=s.size())
    {
        return true;
    }
    if(s[i] == '?')
    {
        bool a=solve1(s,t,start+1,end,i+1);
        bool b=solve1(s,t,start,end-1,i+1);
        return a || b;
    }
    else if(s[i] == t[start])
    {
        return solve1(s,t,start+1,end,i+1);
    }
    else if(s[i] == t[end])
    {
        return solve1(s,t,start,end-1,i+1);
    }
    else 
    {
        return false;
    }
}
void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    string t = "";
    for (int i = 1; i <= n; i++)
    {
        if (i & 1)
        {
            t += "a";
        }
        else
        {
            t += "b";
        }
    }
    ll start = 0;
    ll end = n - 1;
    ll lifeline = 0;
    if(solve1(s,t,start,end,0))
    {
        cout<<"YES"<<endl;
        return ;
    }
    cout<<"NO"<<endl;
    return ;
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