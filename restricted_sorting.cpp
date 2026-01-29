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
        vector<int> vec(n);
        bool so=false;
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
            if(i>0 && vec[i-1] > vec[i])
            {
                so=true;
            }
        }
        if(!so)
        {
            cout<<-1<<endl;
            continue;
        }
        vector<int> temp=vec;
        sort(vec.begin(),vec.end());
        int k=0;
        for(int i=0;i<n;i++)
        {
            if(temp[i] != vec[i])
            {
                k=max(k,abs(temp[i]-vec[i]));   
            }
        }
        cout<<k<<endl;
    }
}