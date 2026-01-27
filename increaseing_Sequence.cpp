#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    cin>>n>>d;
    vector<int> vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    int cnt=0;
    for(int i=1;i<n;i++)
    {
        if(vec[i-1]>= vec[i])
        {
            int rem=vec[i-1]-vec[i];
            cnt+=(rem/d+1);
            vec[i]=vec[i]+(rem/d+1)*d;
        }
    }
    cout<<cnt<<endl;
}