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
        if(n%9 != 0 && n>0)
        {
            cout<<0<<endl;
        }
        else{
            cout<<10<<endl;
        }
    }
}