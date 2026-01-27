#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> vec(n);
        for(int i=1;i<=n;i++)
        {
            cin>>vec[i];
        }
        vector<int> dp(n+1,0);
        for(int i=1;i<=n;i++)
        {
            if(vec[i]+i <= n)
            {
                dp[vec[i]+i]++;
            }
        }
        int mx=0;
        for(int i=2;i<=n;i++)
        {
            mx=max(mx,dp[i]);
        }
        cout<<mx<<endl;
    }
}