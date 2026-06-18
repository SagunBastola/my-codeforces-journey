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
    ll n,k;
    cin>>n>>k;

    vi a(n);
    cin>>a;

    ll sum=a[0];
    ll req=0;
    for(int i=1;i<n;i++)
    {
        if((a[i]/sum)*100 <= k)
        {
            sum+=a[i];
            continue;
        }
        else
        {
            req+=ceil(((a[i]/sum)*100-k)*sum);
            sum+=a[i];
            sum+=req;
        }
    }
    cout<<req<<endl;
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