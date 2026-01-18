#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ll=long long;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        unordered_set<int> s;
        int n;
        cin>>n;
        vector<int> vec(n*n);
        ll sum=0;
        ll cnt=0;
        vector<int> ans;
        vector<int> a;
        for(int& x : vec)
        {
            cin>>x;
            if(s.find(x) == s.end())
            {
                ans.push_back(x);
                a.push_back(x);
            }
            s.insert(x);
        }
        sort(a.begin(),a.end());
        int missing=1;
        for(int i=0;i<a.size();i++)
        {
            if(a[i] == missing)
            {
                missing++;
            }
        }
        cout<<missing<<" ";
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;

    }
}