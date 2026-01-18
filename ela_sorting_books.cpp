#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        unordered_map<char,int> ma1;
        for(int i=0;i<n;i++)
        {
            ma1[s[i]]++;
        }
        ll a=k;
        string result="";
        while(a--)
        {
            int cnt=n/k;
            char start='a';
            while(cnt--)
            {
                if(ma1[start] >= 1)
                {
                    ma1[start]-=1;
                }
                else
                {
                    break;
                }
                start++;
            }
            result+=start;
        }
        cout<<result<<endl;
        
    }
}