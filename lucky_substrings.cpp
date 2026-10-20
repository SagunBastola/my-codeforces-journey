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

    string s;
    cin>>s;

    ll f=0,sev=0;
    rep(i,0,s.size())
    {
        if(s[i] == '4')
        {
            f++;
        }
        else if(s[i] == '7')
        {
            sev++;
        }
    }
    if(f == 0 && sev == 0)
    {
        cout<<-1<<endl;
    }
    else if(f >= sev)
    {
        cout<<4<<endl;
    }
    else{
        cout<<7<<endl;
    }
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