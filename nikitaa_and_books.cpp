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
    int n;
    cin>>n;
    vi a(n);
    cin>>a;
    ll rem=0;
    rep(i,0,n-1)
    {
        if(i==0)
        {
            rem+=(a[i]-1);
            a[i]=1;
        }
        else if(i>0 && a[i] > a[i-1])
        {
            rem+=(a[i]-a[i-1]-1);
            a[i]=a[i-1]+1;
            
        }
        else if(a[i] <= a[i-1])
        {
            
            rem-=(a[i-1]+1-a[i]);
            if(rem < 0)
            {
                cout<<"NO"<<endl;
                return;
            }
            a[i]=a[i-1]+1;
        }
        
    }
    a[n-1]=a[n-1]+rem;
    rep(i,1,n)
    {
        if(a[i-1] >= a[i])
        {
            cout<<"NO"<<endl;
            return;
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