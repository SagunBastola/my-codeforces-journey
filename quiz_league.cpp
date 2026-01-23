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
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int cnt=0;
        int j=i;
        while(j != i+k && j<n)
        {
            if(vec[j] == 1)
            {
                cnt++;
            }
            j++;
            
        }
        i=j;
        ans=max(ans,cnt);
        

    }
    cout<<ans;
}