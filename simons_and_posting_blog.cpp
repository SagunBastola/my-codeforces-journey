#include <bits/stdc++.h>
using ll = long long;
using namespace std;
#define rep(i, m, n) for (ll i = m; i < n; i++)
#define repr(i, m, n) for (ll i = m; i >= n; i--)
template<typename T>
istream& operator>>(istream &s, vector<T> &v)
{
    for(auto &x : v)
        s >> x;
    return s;
}
template<typename T>
ostream& operator<<(ostream& s,vector<T> &v)
{
    for(auto &x : v)
    {   
        s<<x;
    }
    return s;
}
#define vi vector<ll>
#define pi pair<ll,ll>
void solve()
{
    int n;
    cin>>n;
    vector<vector<int>> vec(n);
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        vector<int> a(x);
        for(int i =0;i<x;i++)
        {
            cin>>a[i];
        }
        reverse(a.begin(),a.end());
        vec[i]=a;
    }
    sort(vec.begin(),vec.end());
    vector<bool> vec1(3000,false);
    vi ans;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<vec[i].size();j++)
        {
            if(!vec1[vec[i][j]])
            {
                ans.push_back(vec[i][j]);
                vec1[vec[i][j]]=true;
            }
            
        }
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
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