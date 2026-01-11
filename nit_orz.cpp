#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long  n,k;
        cin>>n>>k;
        vector<long long> vec(n);
        for(long long i=0;i<n;i++)
        {
            cin>>vec[i];
        }
        long long max1=0;
        for(long long i=0;i<n;i++)
        {
            vec[i] |= k;
            max1=max(max1,vec[i]);
        }
        cout<<max1<<endl;

    }
}