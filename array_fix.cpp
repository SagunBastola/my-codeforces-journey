#include <bits/stdc++.h>
using ll = long long;
using namespace std;
#define rep(i, m, n) for (int i = m; i < n; i++)
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<string> vec(n);
        rep(i,0,n)
        {
            cin>>vec[i];
        }
        vector<string> ans;
        if(vec[0].size()>0)
        {
            int idx=0;
            string result="";
            string a=vec[0];
            result+=a[0];
            string s=a;
            a.erase(0,1);
            while(idx < vec[0].size() && result<a)
            {
                ans.push_back(result);
                result=vec[0][idx];
                s=a;
                a.erase(0,1);
                idx++;
            }
            ans.push_back(s);
        }
        rep(i,1,n)
        {
            string a=vec[i];
            if(a.size() == 1)
            {
                ans.push_back(a);
                continue;
            }
            int n=a.size()-1;
            int j=0;
            string s="";
            while(s  <= ans[ans.size()-1] && j<=n)
            {
                s+=a[j];
                a.erase(0,1);
                j++;
                if(s >= ans[ans.size()-1])
                {
                    ans.push_back(s);
                    s="";
                }
            }
        }
        cout<<endl;
    }
}