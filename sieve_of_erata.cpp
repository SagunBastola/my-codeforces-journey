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
    int ta=false;
    int tv=false;
    int n;
    cin>>n;
    vi vec(n);
    cin>>vec;
    rep(i,0,n)
    {
        if(vec[i] == 1)
        {
            ta=true;
        }
        if(vec[i] == 67)
        {
            tv=true;
        }
    }
    if( tv)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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