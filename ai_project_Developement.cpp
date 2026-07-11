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
    int n,x,y,z;
    cin>>n>>x>>y>>z;

    //without ai;
    int without_ai = ceil((double)n / (x+y));
    int with_ai=0;
    //with ai
    if(n <= x*z)
    {
        with_ai=ceil((double)n / x);
    }
    else{
        int rem=n-x*z;
        with_ai=ceil((double)rem / (x+10*y))+z;
    }
    cout<<min(without_ai,with_ai)<<endl;
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