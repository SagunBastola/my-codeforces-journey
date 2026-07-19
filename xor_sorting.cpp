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
        int n,q;
        cin>>n>>q;
        vi a(n);
        cin>>a;

        vector<pi> b(n);
        rep(i,0,n)
        {
            pi c;
            c.first=a[i];
            c.second=i;
            b[i]=c;
        }
        int max1=0;
        rep(i,0,n)
        {
            if(b[i].second == i)
            {
                break;
            }
            else if(true){

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