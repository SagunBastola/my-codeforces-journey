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
// void solve()
// {
//     ll n, k;
//     cin >> n >> k;

//     vi a(n);
//     cin >> a;

//     unordered_map<ll, ll> lastk(k + 1);
//     lastk[0] = -1;
//     ll sum=0;
//     ll cnt=0;
//     for (ll i = 0; i < n; i++)
//     {
//         sum+=a[i];

//         if(lastk.find(k-sum%k) != lastk.end())
//         {
//             if(i-lastk[k-sum%k] > k)
//             {
//                 cnt++;
//             }
//         }
//         if(lastk.find(sum%k) == lastk.end())
//         {
//             lastk[sum%k]=i;
//         }
//     }
//     cout<<cnt<<endl;
// }

// void solve()
// {
//     ll n, k;
//     cin >> n >> k;

//     vi a(n);
//     cin >> a;

//     ll sum=0;
//     ll cnt=0;

//     vi prefix(n,0);
//     prefix[0]=a[0];
//     unordered_map<ll,ll> cntt(k+1);
//     for(ll i=1;i<n;i++)
//     {
//         prefix[i]=a[i]+prefix[i-1];
//     }
//     for(ll i=0;i<n;i++)
//     {
//         sum+=a[i];
//         if(sum%k == 0)
//         {
//             if(i >= k)
//             {
//                 cnt++;
//             }
//         }
//         for(ll j=0;j<i-k;j++)
//         {
//             if((sum-prefix[j])%k == 0)
//             {
//                 cnt++;
//             }
//         }
//     }
//     cout<<cnt<<endl;
// }

void solve()
{
    ll n, k;
    cin >> n >> k;

    vi a(n);
    cin >> a;

    ll sum = 0;
    ll cnt = 0;

    vi prefix(n + 1, 0);

    vi cntt(k, 0);
    // cntt[0] = 1;
    for (ll i = 0; i < n; i++)
    {
        prefix[i + 1] = (a[i] + prefix[i]) % k;
    }
    for (ll i = 1; i <= n; i++)
    {
        if (i - k > 0)
        {
            cntt[prefix[i - k - 1]]++;
        }
        cnt += cntt[prefix[i]];
    }
    cout << cnt << endl;
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