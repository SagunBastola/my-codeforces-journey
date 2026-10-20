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

    vi incr;
    vi decr;

    unordered_set<ll> seendecr;
    unordered_set<ll> seenincr;

    rep(i,0,n)
    {
        if(seendecr.find(a[i]) == seendecr.end())
        {
            decr.push_back(a[i]);
            seendecr.insert(a[i]);
        }
        else{
            if(seenincr.find(a[i]) == seenincr.end())
            {
                incr.push_back(a[i]);
                seenincr.insert(a[i]);
            }
            else{
                cout<<"NO"<<endl;
                return;
            }
        }

    }
    cout<<"YES"<<endl;
    cout<<incr.size()<<endl;
    sort(incr.begin(),incr.end());
    cout<<incr<<endl;

    cout<<decr.size()<<endl;
    sort(decr.rbegin(),decr.rend());
    cout<<decr<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    t=1;
    while (t--)
    {
        solve();
    }
}