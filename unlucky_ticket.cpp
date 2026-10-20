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
    ll n;
    cin >> n;

    string s;
    cin >> s;

 
    string firsthalf;
    string secondhalf;
    rep(i,0,n)
    {
        firsthalf+=s[i];
    }
    rep(i,n,2*n)
    {
        secondhalf+=s[i];
    }
    sort(firsthalf.rbegin(),firsthalf.rend());
    sort(secondhalf.rbegin(),secondhalf.rend());
    if(firsthalf > secondhalf)
    {
        swap(firsthalf,secondhalf);
    }
    bool t=true;
    rep(i,0,n)
    {
        if(firsthalf[i] < secondhalf[i])
        {

        }
        else{
            t=false;
        }
    }
    if(t)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    t = 1;
    while (t--)
    {
        solve();
    }
}