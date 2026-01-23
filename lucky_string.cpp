#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll n;
    cin>>n;
    string a="abcd";
    string result="";
    for(int i=0;i<n;i++)
    {
        result+=a[i%4];
    }
    cout<<result;
}