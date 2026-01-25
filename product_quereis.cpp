#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        vector<int> vec(n+1);
        for(int i=1;i<=n;i++)
        {
            cin>>vec[i];
        }
        unordered_set<int> s;
        vector<int> ans(n+1);
        for(int i=1;i<=n;i++)
        {
            s.insert(vec[i]);
            if(s.find(i) != s.end())
            {
                ans[i]=1;
                continue;
            }
            int a=i;
            while(i)
        }
    }
}