#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> vec(n);
        for(int& x : vec)
        {
            cin>>x;
        }
        ll new_sum=0;
        ll old_sum=0;
        int cnt=0;
        if(vec[0] == 0)
        {
            cnt++;
        }
        new_sum+=vec[0];
        ll max1=vec[0];
        for(int i=1;i<n;i++)
        {
            if(vec[i] == new_sum)
            {
                cnt++;
            }
            else if(max1 == new_sum-max1+vec[i])
            {
                cnt++;
            }
            old_sum=new_sum;
            new_sum+=vec[i];
            max1=max(max1,1ll*vec[i]);
        }
        cout<<cnt<<endl;
    }
}