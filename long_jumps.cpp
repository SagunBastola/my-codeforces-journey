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
        vector<int> ans(n);
        int ii=INT_MIN;
        for(int i=n-1;i>=0;i--)
        {
            ans[i]=vec[i];
            int j=i+vec[i];
            if(j<n)
            {
                ans[i]+=ans[j];
            }
            ii=max(ans[i],ii);
        }
        cout<<ii<<endl;
    }
}