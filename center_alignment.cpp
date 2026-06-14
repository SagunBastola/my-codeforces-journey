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
        s<<x<<" ";
    }
    return s;
}
#define vi vector<ll>
#define pi pair<ll,ll>
void solve()
{
    string s;
    vector<string> vec;
    int max1=0;
    while(getline(cin,s))
    {
        vec.push_back(s);
        int s1=s.size();
        max1=max(max1,s1);
    }
    cout<<"*";
    for(int i=0;i<max1;i++)
    {
        cout<<"*";
    }
    cout<<"*"<<endl;
    bool left1=false;
    for(int i=0;i<vec.size();i++)
    {
        cout<<"*";
        if(vec[i].size() == max1)
        {
            cout<<vec[i]<<"*"<<endl;
            continue;
        }
        int space=max1-(vec[i].size());
        int left=space/2;
        int right=space-left;
        if(left != right)
        {
            if(left1)
            {
                left=left;
                right=right;
                left1=false;
            }
            else{
                int temp=left;
                left=right;
                right=temp;
                left1=true;
            }
        }
        for(int j=0;j<right;j++)
        {
            cout<<" ";
        }
        cout<<vec[i];
        for(int j=0;j<left;j++)
        {
            cout<<" ";
        }
        cout<<"*"<<endl;

    }

    cout<<"*";
    for(int i=0;i<max1;i++)
    {
        cout<<"*";
    }
    cout<<"*"<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    t=1;
    while (t--)
    {
        solve();
    }
}