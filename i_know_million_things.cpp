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
    
    vi a(n);
    cin>>a;

    ll e=0;
    ll o=0;
    rep(i,0,n)
    {
        if(a[i]%2 == 0)
        {
            e++;
        }
        else{
            o++;
        }
    }
    if((n==2 && o == 1) || (n==3 && o == 3))
    {
        cout<<"Larpity";
    }
    else{
        cout<<"Moggity";
    }
    cout<<endl;

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