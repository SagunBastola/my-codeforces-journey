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

    sort(a.begin(),a.end());
    ll to_pair=0;
    ll ans=0;
    
    ll i=0;
    while(i<n-1)
    {
        if(a[i] == a[i+1])
        {
            if(to_pair == 1)
            {
                ans++;
                to_pair=0;
            }
            else{
                to_pair=1;
            }
            i=i+2;
        }
        else{
            i++;
        }
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