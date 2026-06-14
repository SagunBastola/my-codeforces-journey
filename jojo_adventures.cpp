#include <bits/stdc++.h>
using ll = long long;
using namespace std;
#define rep(i, m, n) for (ll i = m; i < n; i++)
#define repr(i, m, n) for (ll i = m; i >= n; i--)
template <typename T>
istream &operator>>(istream &s, vector<T> &v)
{
    for (auto &x : v)
        s >> x;
    return s;
}
template <typename T>
ostream &operator<<(ostream &s, vector<T> &v)
{
    for (auto &x : v)
    {
        s << x << " ";
    }
    return s;
}
#define vi vector<ll>
#define pi pair<ll, ll>
void solve()
{
    string s;
    cin >> s;
    ll no_of_ones=0;
    for (ll i=0;i<s.size();i++)
    {
        if(s[i] == '1')
        {
            no_of_ones++;
        }
    }
    if(no_of_ones == 0)
    {
        cout<<0<<endl;
        return;
    }
    else if(no_of_ones == s.size())
    {
        cout<<s.size()*s.size()<<endl;
        return;
    }
    ll max_count=0;
    ll count=0;
    ll n=s.size();
    for(int i=0;i<n;i++)
    {
        max_count=max(max_count,count);
        if(s[i] == '0')
        {
            count=0;
        }
        else{
            count++;
            if(i == n-1)
            {
                ll j=0;
                while(s[j] != '0')
                {
                    j++;
                    count++;
                }
                max_count=max(max_count,count);
                break;
            }
        }
    }
    ll max_sum=0;
    ll multiple=1;
    while(max_count > 0)
    {
        max_sum=max(max_sum,max_count * multiple);
        multiple++;
        max_count--;
    }
    cout<<max_sum<<endl;
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