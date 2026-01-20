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
        int one_count=0;
        int zero_count=0;
        for(int& x : vec)
        {
            
            cin>>x;
            if(x== 1)
            {
                one_count++;
            }
            else{
                zero_count++;
            }
        }
        bool t=true;
        if(one_count ==0 || zero_count==0)
        {
            cout<<"YES"<<endl;
            continue;
        }
        for(int i=0;i<n-1;i++)
        {
            if(!vec[i] && !vec[i+1])
            {
                t=false;
                break;
            }
        }
        if(t)
        {
            cout<<"NO"<<endl;
        }
        else    
        {
            cout<<"YES"<<endl;
        }

    }
}