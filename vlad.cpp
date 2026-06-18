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
ll digit_sum(ll a)
{
    ll sum=0;
    while(a > 0)
    {
        sum+=(a%10);
        a=a/10;
    }
    return sum;
}
void solve(vector<ll>& res)
{
    ll a;
    cin>>a;
    cout<<res[a]<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<ll> res(200000);
    res[0]=0;
    for(ll i=1;i<200004;i++)
    {
        res[i]=res[i-1]+digit_sum(i);
    }
    ll t;
    cin >> t;
    while (t--)
    {
        solve(res);
    }
}