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
    vi vec(n);
    cin>>vec;
    ll i=0;
    ll j=n-1;
    if(i==j)
    {
        cout<<0<<endl;
        return;
    }
    ll min_sub=abs(vec[i]-vec[j]);
    while(i<j)
    {
        min_sub=gcd(min_sub,abs(vec[i]-vec[j]));
        i++;
        j--;
    }
    cout<<min_sub<<endl;
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