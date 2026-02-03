#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll n,a;
    cin>>n>>a;
    ll mul=a/n;
    if(mul*n != a)
    {
        cout<<-1<<endl;
        return 0;
    }
    int cnt=0;
    while(mul > 1)
    {
        if(mul%6 == 0)
        {
            cnt+=2;
            mul=mul/6;
        }
        else if(mul%3 == 0)
        {
            cnt++;
            mul=mul/3;
        }
        else if(mul%2 == 0)
        {
            cnt++;
            mul=mul/2;
        }
        else{
            cout<<-1<<endl;
            return 0;
        }
    }
    cout<<cnt<<endl;
}