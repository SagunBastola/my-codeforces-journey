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
        s << x + 1 << " ";
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

    stack<ll> st;
    vi rem;
    rep(i, 0, s.size())
    {
        if (s[i] == '3')
        {
        }
        else if (s[i] == '2')
        {
            if (st.empty())
            {
            }
            else
            {
                st.pop();
                rem.push_back(i);
            }
        }
        else
        {
            st.push(i);
        }
    }

    cout << rem.size() + st.size() << endl;
    if (rem.size() + st.size() == 0)
    {
        cout<<endl;
        return;
    }
    while (!st.empty())
    {
        rem.push_back(st.top());
        st.pop();
    }
    sort(rem.begin(),rem.end());
    cout<<rem;
    cout << endl;
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