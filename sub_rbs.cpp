#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(s[i] != '(')
            {
                break;
            }
            cnt++;
        }

        if(cnt < n/2-1)
        {
            cout<<n-2;
        }
        else{
            cout<<-1;
        }
        cout<<endl;
    }
}