#include <bits/stdc++.h>
using ll = long long;
using namespace std;
#define rep(i, m, n) for (int i = m; i < n; i++)
#define vi vector<int>
#define pi pair<int>
void solve()
{
    int n;
    cin>>n;
    vi a(n);
    for(int& x : a)
    {
        cin>>x;
    }
    sort(a.begin(),a.end());
    vi b;vi c;
    rep(i,0,n)
    {
        if(i<n/2)
        {
            b.push_back(a[i]);
        }
        else{
            c.push_back(a[i]);
        }
    }
    int i=0;
    int j=c.size()-1;
    int idx=0;
    vi bb;
    while(j>=0 && i<b.size())
    {
        if(idx%2 == 0)
        {
            bb.push_back(b[i]);
            i++;
        }
        else{
            bb.push_back(c[j]);
            j--;
        }
        idx++;
    }
    while(i<b.size())
    {
        bb.push_back(b[i]);
        i++;
    }
    while(j>=0)
    {
        bb.push_back(c[j]);
        j--;
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(sum == bb[i])
        {
            cout<<"NO"<<endl;
            return;
        }
        sum+=bb[i];
    }
    cout<<"YES"<<endl;
    rep(i,0,n)
    {
        cout<<bb[i]<<" ";
    }
    cout<<endl;
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