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

    if(n==1)
    {
        cout<<1<<endl;
    }
    int result=0;
    rep(i,1,n)
    {
        if( s[i] != s[i-1])
        {
            result++;
        }
    }
    if(result==0)
    {
        cout<<1<<endl;
    }
    else if(result ==1)
    {
        cout<<2<<endl;
    }
    else{
        cout<<1<<endl;
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