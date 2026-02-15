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
    ll n;
    cin>>n;
    vi a(n);
    cin>>a;
    ll neg=0;
    ll pos=0;
    rep(i,0,n)
    {
        if(a[i] < 0)
        {
            neg+=abs(a[i]);
        }
        if(a[i]> 0)
        {
            pos+=abs(a[i]);
        }
    }
    ll na=neg;
    ll sum=0;
    repr(i,n-1,0)
    {
        if(a[i] < 0)
        {
            if(neg <= 0)
            {
                break;
            }
            sum=sum+min({neg,abs(a[i]),pos});
            if(min({neg,abs(a[i]),pos}) == pos)
            {
                break;
            }
            if(neg <= 0)
            {
                break;
            }
            neg=neg+a[i];
        }
        else{
            pos=pos-a[i];
        }
        if(pos <= 0)
        {
            break;
        }
    }
    cout<<abs(na-sum)<<endl;
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