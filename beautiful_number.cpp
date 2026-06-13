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
        s << x;
    }
    return s;
}
#define vi vector<ll>
#define pi pair<ll, ll>
void solve()
{
    string s;
    cin >> s;
    ll sum = 0;
    for (int i = 0; i < s.size(); i++)
    {
        sum += (s[i] - '0');
    }
    if (sum < 10)
    {
        cout << 0 << endl;
        return;
    }
    sort(s.begin() + 1, s.end());
    ll count = 0;
    bool check_First = true;
    for (int i = s.size() - 1; i > 0;)
    {
        if (sum < 10)
        {
            cout << count << endl;
            return;
        }
        if (check_First && ((s[i] - '0') < (s[0] - '0')))
        {
            sum = sum - (s[0] - '0') + 1;
            count++;
            check_First = false;
            continue;
        }
        count++;
        sum -= (s[i] - '0');
        i--;
    }
    cout << count << endl;
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