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
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    stack<char> st;
    int open=0;
    int close=0;
    rep(i,0,n)
    {
        if(s[i] == '(')
        {
            open++;
        }
        else{
            close++;
        }
    }
    rep(i,0,n)
    {
        if(st.empty())
        {
            st.push(s[i]);
            continue;
        }
        if(st.top() == '(' && s[i] == ')')
        {
            st.pop();
        }
        else{
            st.push(s[i]);
        }
    }
    char c;
    if(open >= close)
    {
        c=')';
    }
    else{
        c='(';
    }
    bool invalid=false;
    if(st.empty())
    {
        invalid=false;
    }
    else{
        invalid=true;
    }
    if(invalid || k==0)
    {
        rep(i,0,n)
        {
            if(s[i] == c && k>0)
            {
                k--;
                cout<<'1';
                continue;
            }
            cout<<"0";
        }
    }
    else{
        rep(i,0,n)
        {
            if(s[i] == c && k>0)
            {
                k--;
                cout<<'1';
                continue;
            }
            cout<<"0";
        }
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