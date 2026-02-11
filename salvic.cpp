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
        string s,t;
        cin>>s>>t;
        int idx=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == '?')
            {
                if(idx < t.size())
                {
                    s[i]=t[idx++];
                }
                else{
                    s[i]='a';
                }
            }
            else if(idx < t.size() && s[i] == t[idx])
            {
                idx++;
            }
        }
        if(idx>=t.size())
        {
            cout<<"YES"<<endl;
            cout<<s<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}