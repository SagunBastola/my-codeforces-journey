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
        vector<long long > vec(n);
        vector<long long > vec1(n);
        for(long long  i=0;i<n;i++)
        {
            cin>>vec[i];
        }
        for(long long  i=0;i<n;i++)
        {
            cin>>vec1[i];
        }
        long long  count=0;
        for(long long  i=0;i<n;i++)
        {
            if(vec[i] == vec1[i])
            {
                continue;
            }
            long long small=min(vec[i],vec1[i]);
            long long large=max(vec[i],vec1[i]);
            if(large%small == 0)
            {
                count++;
            }
            else{
                count=count+2;
            }
            
        }
        cout<<count<<endl;
    }
}