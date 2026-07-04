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
    vi a(n);
    cin>>a;
    
    vi div6;
    vi no2;
    vi no3;
    vi noboth;
    rep(i,0,n)
    {
        if(a[i] % 6 == 0)
        {
            div6.push_back(a[i]);
        }
        else if(a[i] % 2 == 0)
        {
            no3.push_back(a[i]);
        }
        else if(a[i] % 3 == 0)
        {
            no2.push_back(a[i]);
        }
        else{
            noboth.push_back(a[i]);
        }
    }
    cout<<div6<<no2<<noboth<<no3<<endl;
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