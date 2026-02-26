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
    vi vec(n);
    cin>>vec;
    bool dcr=true;
    if(vec[0] < vec[1])
    {
        dcr=false;
    }
    else{
        dcr=true;
    }
    int cnt=0;
    for(int i=1;i<n;i++)
    {
        if(vec[i] < vec[i-1])
        {
            while(i<n && vec[i] < vec[i-1])
            {
                i++;
            }
        }
        else if(vec[i] > vec[i-1])
        {
            while(i<n && vec[i] > vec[i-1])
            {
                i++;
            }
        }
        if(i!=n)
        {
            cnt++;
        }
        else{
            break;
        }
     
    }
    cout<<cnt<<endl;
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