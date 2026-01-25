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
        vector<int> vec(n);
        for(int& x : vec)
        {
            cin>>x;
        }
        int cnt=0;
        for(int i=1;i<=n;i++)
        {
            int diff=abs(vec[i-1]-i);
            cnt=__gcd(cnt,diff);
        }
        cout<<cnt<<endl;
    }
}