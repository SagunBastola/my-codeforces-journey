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
    int n;
    cin>>n;
    vi a(n);
    cin>>a;
    vi b;
    vi c;
    rep(i,0,n)
    {
        if(!(i&1))
        {
            b.push_back(a[i]);
        }
        else{
            c.push_back(a[i]);
        }
    }
    vi d;
    int idx=0;
    int idx2=0;
    sort(b.begin(),b.end());
    sort(c.begin(),c.end());
    rep(i,0,n)
    {
        if(!(i&1))
        {
            d.push_back(b[idx]);
            idx++;
        }
        else{
            d.push_back(c[idx2]);
            idx2++;
        }
    }
    rep(i,0,n-1)
    {
        if(a[i] > a[i+1])
        {
            cout<<"NO"<<endl;
            return ;
            break;
        }
    }
    cout<<"YES"<<endl;
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