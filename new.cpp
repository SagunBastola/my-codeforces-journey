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
    vi a(2);
    cin>>a;
    ll sum=a[0]+a[1];
    if(a[0] == 0 && a[1] == 0)
    {
        cout<<"YES"<<endl;
        return;
    }
    if(a[0] >= 2*a[1] && a[0] >=-4*a[1] && sum>0 && sum%3 == 0)
    {
        cout<<"YES"<<endl;
        return ;
    }
    cout<<"NO"<<endl;
    return ;


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