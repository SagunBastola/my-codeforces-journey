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
        string t;   
        int a=n;
        for(int i=0;i<a;i++)
        {
            if(i<a/2)
            {
                t+='(';
            }
            else{
                t+=')';
            }
        }
        if(t.empty())
        {
            cout<<-1<<endl;;
            continue;
        }
        if(s== t)
        {
            cout<<-1<<endl;;
            continue;
        }
        ll i=0;
        while(s[i] == t[i] && i<a)
        {
            i++;
        }
        cout<<s[i]<<t[i];
        i++;
        if(i<a )
        {
            cout<<i*2<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}