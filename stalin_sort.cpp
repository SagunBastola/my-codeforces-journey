#include<bits/stdc++.h>
using namespace std;
#define rep(i,m,n) for(int i=m;i<n;i++)
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> vec(n);
        rep(i,0,n)
        {
            cin>>vec[i];
        }
        int best=0;
        rep(i,0,n)
        {
            int curr=0;
            rep(j,i,n)
            {
                if(vec[i] >= vec[j])
                {
                    curr++;
                }
            }
            best=max(curr,best);
        }
        cout<<n-best<<endl;
    }

}