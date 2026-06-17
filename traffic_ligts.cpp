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
    char curr;
    cin>>curr;
    string traffic_sequence;
    cin>>traffic_sequence;
    if(curr == 'g')
    {
        cout<<0<<endl;
        return;
    }
    
    ll ans=0;
    ll max1=0;
    for(int i=0;i<2*n;i++)
    {
        ans=0;
        if(traffic_sequence[i%n] == curr)
        {
            while(i < 2*n && traffic_sequence[i%n] != 'g')
            {
                ans++;
                i++;
            }
            max1=max(ans,max1);
        }
    }
    cout<<max1<<endl;
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