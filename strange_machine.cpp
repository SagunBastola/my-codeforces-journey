#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,q;
        cin>>n>>q;
        string mac;
        vector<long long int> vec(q);
        cin>>mac;
        for(long long int i=0;i<q;i++)
        {
            cin>>vec[i];
        }
        vector<long long int> ans(q);
        int A=0;
        int B=0;
        for(int i=0;i<n;i++)
        {
            if(mac[i] == 'A')
            {
                A++;
            }
            else{
                B++;
            }
        }
        for(long long int i=0;i<q;i++)
        {
            long long int a=vec[i];
            long long int j=0;
            if(B == 0)
            {
                cout<<vec[i]<<endl;
                continue;
            }
            while(a>0)
            {
                if(mac[j%n] == 'B')
                {
                    a=round((double)a/2 -0.5);
                }
                else{
                    a=a-1;
                }
                j++;
                ans[i]++;
            }
        }
        if(B==0)
        {
            continue;
        }
        for(long long int i=0;i<q;i++)
        {
            cout<<ans[i]<<endl;
        }
    }
}