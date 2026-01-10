#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int x;
        cin>>n>>x;
        vector<int> vec(n);
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
        }
        int req=0;
        req=abs(vec[0]-0);
        for(int i=0;i<n-1;i++)
        {
            req=max(req,abs(vec[i+1]-vec[i]));
        }
        req=max(req,abs(vec[n-1]-x)*2);
        cout<<req<<endl;
    }
}