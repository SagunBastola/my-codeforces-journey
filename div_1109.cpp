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
    int n;
    cin>>n;
    cin>>s;
    
    ll longhash=0;
    ll max1=0;
    rep(i,0,n)
    {
        if(s[i] == '#')
        {
            longhash++;
            max1=max(max1,longhash);
        }
        else{
            longhash=0;
        }
    }

    max1=max(max1,longhash);
    if(max1 % 2 == 1)
    {
        cout<<max1/2 +1 <<endl;
        return;
    }
    cout<<max1/2<<endl;
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