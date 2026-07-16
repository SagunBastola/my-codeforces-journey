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
const ll MIN_INF = -1e18;
ll cost(ll n, ll c, ll i, const vi &a, vector<ll> &dp)
{
    if (i >= n)
    {
        return 0;
    }
    if (dp[i] != MIN_INF)
    {
        return dp[i];
    }
    if (i == n - 1)
        return dp[i] = -c + a[i];

    ll op1 = -c + max(a[i], a[i + 1]) + cost(n, c, i + 2, a, dp);
    ll op2 = -c + a[i] + cost(n, c, i + 1, a, dp);
    dp[i] = max(op1, op2);
    return max(op1, op2);
}
void solve() {
    ll n, c;
    cin >> n >> c;
    vi a(n);
    cin >> a;

    sort(a.begin(), a.end());

    ll profit = 0;
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        if (left < right && a[left] < c) {

            profit += (a[right] - c);
            left++;
            right--; 
        } else {
            profit += (a[right] - c);
            right--;
        }
    }

    cout << profit << endl;
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