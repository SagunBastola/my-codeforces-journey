#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,t;
        cin>>s>>t;
        if(t.find(s) < s.size())
        {
            cout<<t.size()+1<<endl;
        }
        else{
            cout<<2*s.size()<<endl;
        }
    }
}