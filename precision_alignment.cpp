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
    vector<vi> a(n);
    vi sum(n);
    rep(i,0,n)
    {
        vi b(3);
        cin>>b;
        a[i]=b;
        sum[i]=b[0]+b[1]+b[2];
    }
    sort(sum.begin(),sum.end());
    while(k>sum[1]-sum[0])
    {
        if(sum[0] == sum[1])
        {
            k--;
            sum[0]++;
            sort(sum.begin(),sum.end());
            continue;
        }
        k-=sum[1]-sum[0];
        sum[0]=sum[1];

        sort(sum.begin(),sum.end());
    }
    cout<<sum[0]+k<<endl;
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