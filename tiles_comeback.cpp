#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> vec(n);
        for(int& x : vec)
        {
            cin>>x;
        }
        if(vec[0] == vec[n-1])
        {
            int cnt=0;
            for(int i=0;i<n;i++)
            {
                if(vec[i] == vec[0])
                {
                    cnt++;
                }
            }
            if(cnt>=k)
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
            continue;
        }
        int left=vec[0];
        int leftcnt=0;
        int right=vec[n-1];
        int rightcnt=0;
        int idx=0;
        for(int i=0;i<n;i++)
        {
            if(vec[i]==left)
            {
                leftcnt++;
            }
            idx++;
            if(leftcnt>=k)
            {
                break;
            }
        }
        for(int i=idx;i<n;i++)
        {
            if(vec[i]==right)
            {
                rightcnt++;
            }
            if(rightcnt>=k)
            {
                break;
            }
        }
        if(leftcnt>=k && rightcnt>=k)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}