#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> vec(n);
    for(int& x : vec)
    {
        cin>>x;
    }
    for(int i=0;i<n;i++)
    {
        int c=3;
        while(c>0 && vec[i]>=k)
        {
            vec[i]-=k;
            c--;
        }
    }
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=vec[i];
    }
    cout<<sum<<endl;

}