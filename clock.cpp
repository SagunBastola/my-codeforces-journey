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
    cin>>s;
    float hour = 0;
    float i = 0;
    if (s[1] == ':')
    {
        hour = s[0] - '0';
        i = 2;
    }
    else
    {
        hour = s[0] - '0';
        hour=hour*10+(s[1]-'0');
        i=3;
    }
    float minute=(s[i]-'0');
    minute=minute*10+(s[i+1]-'0');
    float hour_angle=(hour/12) * 360;
    float minute_angle=(minute/60)*360;
    float diff=abs(hour_angle-minute_angle);
    if(diff > 180)
    {
        diff=360-diff;
    }
    cout<<diff<<endl;
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