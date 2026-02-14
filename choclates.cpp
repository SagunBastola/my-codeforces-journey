#include <bits/stdc++.h>
using ll = long long;
using namespace std;
#define rep(i, m, n) for (int i = m; i < n; i++)
#define repr(i, m, n) for (int i = m; i >= n; i--)
#define vi vector<int>
#define pi pair<int>
void solve()
{
    ll n;
    cin >> n;
    vi vec(n);
    rep(i, 0, n) { cin >> vec[i]; }
    ll sum = 0;
    repr(i, n-1, 0)
    {
        if(i==n-1)
        {
            sum+=vec[i];
        }
        else if(vec[i] >= vec[i+1])
        {
            sum+=vec[i+1]-1;
            vec[i]=vec[i+1]-1;
        }
        else{
            sum+=vec[i];
        }
        if(vec[i] <=0)
        {
            break;
        }
    }
    cout<<sum<<endl;
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