#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        vector<long long int> vec(n);
        long long int curr=0;
        long long int res=0;
        for(long long int i=0;i<n;i++)
        {
            cin>>vec[i];
            if(vec[i]>curr)
            {
                res+=(1ll)*(vec[i]-curr);
            }
            curr=(1ll)*vec[i];
        }
        cout<<res-1<<endl;

    }
}