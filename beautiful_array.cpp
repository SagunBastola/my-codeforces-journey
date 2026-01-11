#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,k,b,s;
        cin>>n>>k>>b>>s;
        vector<long long int> vec(n);
        vec[0]=k*b;
        s-=k*b;
        if(s<0)
        {
            cout<<-1<<endl;
        }
        else 
        {
            for(long long i=0;i<n;i++)
            {
                long long num=min(k-1,s);
                vec[i]+=num;
                s-=num;
            }
            if(s>0)
            {
                cout<<-1<<endl;
            }
            else{
                for(long long val : vec)
                {
                    cout<<val<<" ";
                }
                cout<<endl;
            }

        }
    }
}