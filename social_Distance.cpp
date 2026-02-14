#include <bits/stdc++.h>
using ll = long long;
using namespace std;
#define rep(i, m, n) for (int i = m; i < n; i++)
#define vi vector<int>
#define pi pair<int>
void solve()
{   
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int one_cnt=0;
    rep(i,0,n)
    {
        if(s[i] == '1')
        {
            one_cnt++;
        }
    }
    int ans=0;
    if(one_cnt == 0)
    {
        int c=0;
        while(c < n)
        {
            ans++;
            c=c+k+1;
        }
        cout<<ans<<endl;
        return;
    }
    vector<int> suffix(n);
    vector<int> prefix(n);
    int suf=0;
    int pre=0;
    for(int i=0;i<n;i++)
    {
        if(s[i] != '1')
        {
            suf++;
        }
        else{
            suf=0;
        }
        suffix[i]=suf;
    }
    pre=0;
    for(int i=n-1;i>=0;i--)
    {
        if(s[i] != '1')
        {
            pre++;
        }
        else{
            pre=0;
        }
        prefix[i]=pre;
    }
    int idx=0;
    if(s[0] == '0' && prefix[0]  > k)
    {
        ans++;
        idx=idx+k;
    }
    for(int i=idx;i<n;i++)
    {
        if(i == n-1 && suffix[i] > k && s[i] == '0')
        {
            ans++;
            break;
        }
        if(s[i] != '1' && suffix[i] >k && prefix[i]>k)
        {
            i=i+k;
            ans++;
        }
    }
    cout<<ans<<endl;

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}