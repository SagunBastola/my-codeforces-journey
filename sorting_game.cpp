#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        bool sorte=true;
        for(int i=1;i<n;i++)
        {
            if(s[i] < s[i-1])
            {
                sorte=false;
            }
        }
        if(sorte)
        {
            cout<<"Bob"<<endl;
            continue;
        }
        ll zero_cnt=0;
        for(int i=0;i<n;i++)
        {
            if(s[i] == '0')
            {
                zero_cnt++;
            }
        }
        vector<ll> result;
        int zeroidx=0;
        int oneidx=n-1;
        while(zeroidx<oneidx)
        {
            while(s[zeroidx] == '0')
            {
                zeroidx++;
            }
            while(s[oneidx] == '1')
            {
                oneidx--;
            }
            if(zeroidx<oneidx)
            {
                result.push_back(zeroidx+1);
                result.push_back(oneidx+1);
                zeroidx++;
                oneidx--;
            }
        }
        cout<<"Alice"<<endl;
        sort(result.begin(),result.end());
        cout<<result.size()<<endl;
        for(ll& x: result)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
}