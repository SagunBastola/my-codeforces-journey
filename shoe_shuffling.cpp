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
    vector<pair<int,int>> vec(n);
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        vec[i].first=a;
        vec[i].second=i;
    }
    sort(vec.begin(),vec.end());
    vector<int> result(n);
    for(int i=0;i<n;i++)
    {
        while(vec[i].first == vec[i+1].second)
        {
            i++;
            
        }
    }
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