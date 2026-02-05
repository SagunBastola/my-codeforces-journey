#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(i==n-1 && s[i]== '1' && k>0)
            {
                k--;
                break;
            }
            if(i== n-2 && s[i] == '1' && s[i+1] == '0' && k>0)
            {
                k--;
                s[i]='0';
                s[i+1]='1';
                break;
            }
            if(i>0 && s[i-1] == '0' && s[i] == '1' && k>0)
            {
                k--;
                swap(s[i-1],s[i]);
            }
        }
        int sum=0;
        for(int i=1 ;i<n;i++)
        {
            sum=sum+(s[i-1]-'0')*10+(s[i]-'0');
        }
        cout<<sum<<endl;
    }
}