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
#define vi vector<ll>
#define pi pair<ll,ll>
void solve()
{
    string s;
    cin>>s;
    ll zero=0;
    ll one=0;
    rep(i,0,s.size())
    {
        if(s[i] == '0')
        {
            zero++;
        }
        else{
            one++;
        }
    }
    if(zero == one)
    {
        cout<<max(0ll,zero-1)<<endl;
    }
    else{
        cout<<min(zero,one)<<endl;
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