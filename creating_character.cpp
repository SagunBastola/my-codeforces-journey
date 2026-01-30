#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,a;
        cin>>s>>a;
        for(int i=0;i<1;i++)
        {
            char temp=s[i];
            s[i]=a[i];
            a[i]=temp;
        }
        cout<<s<<" "<<a<<endl;
    }
}