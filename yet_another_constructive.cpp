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
template <typename T>
ostream &operator<<(ostream &s, vector<T> &v)
{
    for (auto &x : v)
    {
        s << x << " ";
    }
    return s;
}
#define vi vector<ll>
#define pi pair<ll, ll>
void solve()
{
    ll n,k,m;
    cin>>n>>k>>m;
    vi a(n);
    if(m<k)
    {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    ll rem=m/k;
    ll last=m%k+m/k;
    a[0]=last;
    rep(i,1,k)
    {
        a[i]=rem;
    }
    int i=k;
    while(i<n)
    {
        int j=i;
        a[i]=last;
        j++;
        while(j<n && j<i+k)
        {
            a[j]=rem;
            j++;
        }
        i=j;
    }
    cout<<a<<endl;
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