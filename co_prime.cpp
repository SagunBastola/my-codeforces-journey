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
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
        }
        int ans=-1;
        vector<int> a(1001,-1);
        for(int i=0;i<n;i++)
        {
            a[vec[i]]=i;
        }
        for(int i=0;i<1001;i++)
        {
            if(a[i] == -1)
            {
                continue;
            }
            for(int j=0;j<1001;j++)
            {
                if(a[j] == -1)
                {
                    continue;
                }
                if(__gcd(i,j) == 1)
                {
                    ans=max(ans,a[i]+2+a[j]);
                }
            }
        }
        cout<<ans<<endl;
        
    }
}