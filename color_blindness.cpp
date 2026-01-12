#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        string a;
        cin>>s;
        cin>>a;
        int i=0;
        int j=0;
        bool t=true;
        while(i<n)
        {
            if((s[i] == 'R' && a[i] !='R') || (a[i] == 'R' && s[i] !='R'))
            {
                cout<<"NO"<<endl;
                t=false;
                break;
            }
            i++;
        }
        if(t)
        {
            cout<<"YES"<<endl;
        }
    }
}