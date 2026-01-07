#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int m;
        cin>>n>>m;
        vector<int> vec(n*m);
        int neg=0;
        long long int sum=0;
        for(int i=0;i<n*m;i++)
        {
            cin>>vec[i];
            if(vec[i]<0)
            {
                neg++;
                vec[i]=-vec[i];
            }
            sum+=vec[i];
        }
        if(neg%2 == 0)
        {
            cout<<sum<<endl;
        }
        else{
            sort(vec.begin(),vec.end());
            sum-=2*vec[0];
            cout<<sum<<endl;

        }
    }
}