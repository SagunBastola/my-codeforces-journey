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
        string s;
        cin>>s;
        unordered_map<char,int> ma;
        for(int i=0;i<n;i++)
        {
            ma[s[i]]++;
        }
        int cnt=0;
        vector<char> vec={'A','B','C','D','E','F','G'};
        for(int i=0;i<7;i++)
        {
            if((ma[vec[i]]-m)<0)
            {
                cnt+=abs(ma[vec[i]]-m);
            }
        }
        cout<<cnt<<endl;
    }
}