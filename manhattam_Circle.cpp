#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<string> vec(n);
        for(string& x : vec)
        {
            cin>>x;
        }
        int total=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(vec[i][j] == '#')
                {
                    total++;
                }
            }
        }
        int find=(total+1)/2;
        int ans1,ans2;
        bool found=false;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(vec[i][j] == '#')
                {
                    find--;
                }
                if(find == 0)
                {
                    ans1=i+1;
                    ans2=j+1;
                    found=true;
                    break;
                }
            }
            if(found)
            {
                break;
            }
        }
        cout<<ans1<<" "<<ans2<<endl;
    }
}