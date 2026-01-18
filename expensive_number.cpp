#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        bool zero_here=false;
        ll zero_cnt=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i] != '0')
            {
                zero_here=true;
            }
            else if(zero_here)
            {
                zero_cnt++;
            }
        }
        cout<<s.size()-zero_cnt-1<<endl;
    }
}