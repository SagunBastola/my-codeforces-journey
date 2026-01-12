#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,m;
        cin>>n>>m;
        vector<pair<set<long long>,int>> vec(n);
        for(long long  i=0;i<n;i++)
        {
            for(long long j=0;j<m;j++)
            {
                long long a;
                cin>>a;
                vec[i].first.insert(a);
            }
            vec[i].second=i;
        }
        sort(vec.begin(),vec.end());
        long long tofind=-1;
        vector<long long > result;
        bool t=true;
        for(long long i=0;i<n*m;i++)
        {
            tofind++;
            if(vec[i%n].first.find(tofind) == vec[i%n].first.end())
            {
                t=false;
                cout<<-1;
                break;
            }
            else if(i<n){
                result.push_back(vec[i].second+1);
            }
        }
        if(t)
        {
            for(long long i=0;i<n;i++)
            {
                cout<<result[i]<<" ";
            }
        }
        cout<<endl;
    }
}