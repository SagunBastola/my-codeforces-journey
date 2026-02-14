#include <bits/stdc++.h>
using ll = long long;
using namespace std;
#define rep(i, m, n) for (ll i = m; i < n; i++)
#define repr(i, m, n) for (ll i = m; i >= 0; i--)
template<typename T>
istream& operator>>(istream &s, vector<T> &v)
{
    for(auto &x : v)
        s >> x;
    return s;
}
#define vi vector<int>
#define pi pair<int>
void solve()
{
    ll n;
    cin>>n;
    vi a(n);
    cin>>a;
    ll sum=0;
    rep(i,0,n)
    {
        sum+=a[i];
    }
    if(sum < n)
    {
        cout<<1<<endl;
        return ;
    }
    ll cnt=abs(sum)-n;
    cout<<cnt<<endl;
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