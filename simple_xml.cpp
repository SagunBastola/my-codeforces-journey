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
    ll space = -1;
    string s;
    cin >> s;
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i] == '<' && s[i + 1] != '/')
        {
            space++;
            rep(j, 0, space)
            {
                cout << "  ";
            }
            while (s[i] != '>')
            {
                cout << s[i];
                i++;
            }
            cout <<s[i] <<endl;
        }
        else if (s[i] == '<' && s[i + 1] == '/')
        {
            rep(j, 0, space)
            {
                cout << "  ";
            }
            while (s[i] != '>')
            {
                cout << s[i];
                i++;
            }
            
            cout<<s[i] << endl;
            space--;
        }
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