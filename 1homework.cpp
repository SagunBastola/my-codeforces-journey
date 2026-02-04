#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n;
        cin>>s;
        int m;
        cin>>m;
        string toadd,sequence;
        cin>>toadd>>sequence;
        for(int i=0;i<m;i++)
        {
            if(sequence[i] == 'D')
            {
                s=s+toadd[i];
            }
            else{
                s=toadd[i]+s;
            }
        }
        cout<<s<<endl;
    }
}