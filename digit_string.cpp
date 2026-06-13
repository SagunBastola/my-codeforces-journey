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
    int count_four = 0;
    count_four = count(s.begin(), s.end(), '4');
    s.erase(remove(s.begin(), s.end(), '4'), s.end());
    int count_from_low = 0;
    for (int i = 0; i < s.size();)
    {
        int count1 = 0;
        while (i < s.size() && (s[i] == '1' || s[i] == '3'))
        {
            count1++;
            i++;
        }
        int count2 = 0;
        while (i < s.size() && (s[i] == '2'))
        {
            count2++;
            i++;
        }
        count_from_low += min(count1, count2);
    }
    cout << count_from_low + count_four << endl;
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