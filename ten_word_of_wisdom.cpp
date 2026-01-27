#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int>> vec(n);
        for(int i=0;i<n;i++)
        {
            int a,b;
            cin>>a>>b;
            vec[i]={b,a,i+1};
        }
        sort(vec.rbegin(),vec.rend());
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            if(vec[i][1] <= 10)
            {
                maxi=vec[i][2];
                break;
            }

        }
        cout<<maxi<<endl;
    }
}