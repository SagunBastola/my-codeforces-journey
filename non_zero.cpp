#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    vector<long long > vec(n);
    for(long long i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    long long  sum=0;
    long long  ans=0;
    unordered_set<long long > s;
    s.insert(0);
    for(long long  i=0;i<n;i++)
    {
        sum+=vec[i];
        if(s.find(sum) != s.end())
        {
             ans++;
             s.clear();
             s.insert(0);
             
             sum=vec[i];
        }
        s.insert(sum);
    }
    cout<<ans<<endl;
}