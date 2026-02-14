#include <bits/stdc++.h>
using ll = long long;
using namespace std;
#define rep(i, m, n) for (int i = m; i < n; i++)
#define vi vector<int>
#define pi pair<int>
void solve()
{
    vector<int> m(26,0);
    vector<int> p(26,0);
    int n;
    cin>>n;
    string x;
    cin >> x;
    for(char a : x)
    {
        m[a-'a']++;
    }
    int ans=0;
    for(char a : x)
    {
        m[a-'a']--;
        p[a-'a']++;
        int cur=0;
        for(int i=0;i<26;i++)
        {
            cur+=min(1,m[i])+min(1,p[i]);
        }
        ans=max(ans,cur);
    }
    cout<<ans<<endl;
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