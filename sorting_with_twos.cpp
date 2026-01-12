#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        vector<long long > vec(n);
        for(long long i=0;i<n;i++)
        {
            cin>>vec[i];
        }
        bool t=true;
        for(long long i=0;i<n-1;i++)
        {
            if(vec[i+1]<vec[i]  && (i & i+1)!=0)
            {
                t=false;
            }
        }
        if(t)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}