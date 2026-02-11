#include <bits/stdc++.h>
using ll = long long;
using namespace std;
#define rep(i, m, n) for (int i = m; i < n; i++)
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s,t;
        cin>>s>>t;
        bool ok=true;
        rep(i,0,n)
        {
            if(s[i] != t[i] && s[i] == '0')
            {
                ok=false;
                break;
            }
            if(s[i] == '1')
            {
                ok=true;
                break;
            }
        }
        if(ok)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}